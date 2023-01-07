#include "generator.h"

int	main(int argc, char **argv)
{
	char		**library;
	static int	availability[2000];
	int		requested_amount;

    // Printing heading and welcoming the user
    print_heading();

	// Checking 'requested_amount' of words
	requested_amount = atoi(argv[argc - 1]);
	if (check_requested_amount(requested_amount) == false)
		return (0);

	// Creating 'library' of potential words
	library = create_library_from_library_txt();

	// Generating and printing random words from 'library'
	srand(time(0));
	printf(BGREEN"---------------------------------------------------\n");
	for (int i = 1; i <= requested_amount; i++)
		print_words(library, availability, requested_amount, i);
	printf(BGREEN"---------------------------------------------------\n");

	// Freeing allocated memory for 'library'
	for (int i = 0; i < MAX_AMOUNT; i++)
		free(library[i]);
	free(library);
}
