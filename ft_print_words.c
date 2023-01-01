#include "generator.h"

// Function which prints a random word from 'library'
// Sets its status in 'availability' at 'position' to unavaiable
void	ft_print_words(char **library, int *availability, int max_amount, int requested_amount,  int i)
{
	int	position;

	position = rand() % (max_amount);
    switch (availability[position])
    {
        case 0: // Word is avaiable (not printed yet)
            printf(CYAN"    %d) ", i);
            printf(ESCAPE"%s", library[position]);
            availability[position] = 1;
            break;
        default: // Word is unavaiable (already printed) 
            ft_print_words(library, availability, max_amount, requested_amount, i);
    }
}