#include "generator.h"

// Function which prints a random word from 'library'
// Sets its status in 'availability' at 'position' to unavaiable
void	print_words(char **library, int *availability, int requested_amount,  int i)
{
	int	position;

	position = rand() % (MAX_AMOUNT);
	switch (availability[position])
	{
		case 0: // Word is avaiable (not printed yet)
			printf(CYAN"%d) ", i);
			printf(ESCAPE"%s", library[position]);
			availability[position] = 1;
			break;
		default: // Word is unavaiable (already printed) 
			print_words(library, availability, requested_amount, i);
	}
}
