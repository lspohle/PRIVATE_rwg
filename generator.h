#ifndef GENERATOR_H
# define GENERATOR_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <time.h>
# define CYAN "\033[1;36m"
# define GREEN "\033[1;32m"
# define ESCAPE "\033[0m"

typedef enum 
{
		true,
		false
}		bool;
bool	ft_check_requested_amount(int max_amount, int requested_amount);
char	**ft_create_library_from_library_txt(int max_amount);
void	ft_print_words(char **library, int *availability, int max_amount, int requested_amount,  int i);

#endif