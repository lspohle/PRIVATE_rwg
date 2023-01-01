#include "generator.h"

// Function which prints a random word from 'library'
// Sets its status in 'availability' at 'position' to unavaiable

void	ft_print_words(char **library, int amount, int *availability, int i)
{
	int	position;

	position = rand() % amount;
	switch (availability[position])
	{
		case 0: // Word is avaiable (not printed yet)
			printf(CYAN"    %d) ", i);
			printf(ESCAPE"%s", library[position]);
			availability[position] = 1;
			break;
		default: // Word is unavaiable (already printed) 
			ft_print_words(library, amount, availability, i);
	}
}
