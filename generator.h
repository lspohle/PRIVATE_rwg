#ifndef GENERATOR_H
# define GENERATOR_H
# define CYAN "\033[1;36m"
# define GREEN "\033[1;32m"
# define ESCAPE "\033[0m"
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <time.h>
# define BUFF_SIZE 1000

typedef enum 
{
		true,
		false
}		bool;
void	ft_print_words(char **library, int amount, int *availability, int i);
bool	ft_check_requested_amount(int requested_amount, int max_amount);
char	**ft_create_library_from_library_txt(int requested_amount);

#endif