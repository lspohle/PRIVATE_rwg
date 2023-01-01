#include "generator.h"

int	main(int argc, char **argv)
{
	char		**library;
	static int	availability[2000];
	int		max_amount;
	int		requested_amount;
	int		i;

	// Checking 'requested_amount' of words
	max_amount = 2000;
	requested_amount = atoi(argv[argc - 1]);
	if (ft_check_requested_amount(max_amount, requested_amount) == false)
		return (0);

	// Creating 'library' of potential words
	library = ft_create_library_from_library_txt(max_amount);

	// Generating and printing random words from 'library'
	i = 1;
	srand(time(0));
	printf(GREEN"--------------------\n");
	while (i <= requested_amount)
	{
		ft_print_words(library, availability, max_amount, requested_amount,  i);
		i++;
	}
	printf(GREEN"--------------------\n");
	
	// Freeing allocated memory for 'library'
	i = 0;
	while (i < requested_amount)
		free(library[i++]);
	free(library);
}
