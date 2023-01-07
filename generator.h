#ifndef GENERATOR_H
# define GENERATOR_H
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <time.h>
# include <stdbool.h>
# define MAX_AMOUNT 2000
# define RED "\e[38;5;160m"
# define CYAN "\033[1;36m"
# define BGREEN "\e[38;5;41;1m"
# define ESCAPE "\033[0m"
# define PURPLE "\e[38;5;141;1m"
# define MINT "\e[38;5;43m"
# define PINK "\e[38;5;212m"

void	print_heading(void);
bool	check_requested_amount(int requested_amount);
char	**create_library_from_library_txt(void);
void	print_words(char **library, int *availability, int requested_amount,  int i);

#endif
