#include "generator.h"

int	main(int argc, char **argv)
{
	char		**library;
	static int	availability[2000];
	int		requested_amount;
	int		i;

	// Checking 'requested_amount' of words
	requested_amount = atoi(argv[argc - 1]);
	if (ft_check_requested_amount(requested_amount, 2000) == false)
		return (0);

	// Creating 'library' of potential words
	library = ft_create_library_from_library_txt(requested_amount);

	// Generating and printing random words from 'library'
	i = 1;
	srand(time(0));
	printf(GREEN"--------------------\n");
	while (i <= requested_amount)
		ft_print_words(library, requested_amount, availability, i++);
	printf(GREEN"--------------------\n");
	
	// Freeing allocated memory for 'library'
	i = 0;
	while (i < requested_amount)
		free(library[i++]);
	free(library);
}
