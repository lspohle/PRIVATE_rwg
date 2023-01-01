#include "generator.h"

// Function which creates the two dimensional array 'library'
// Dublicates content of the file 'library_txt' into the array 'library'
// All potential words are stored in 'library'
char	**ft_create_library_from_library_txt(int max_amount)
{
    FILE		*library_txt;
    char		**library;
    char		tmp[20];

	// Allocating memory 'library'
    library = (char **) calloc (max_amount, sizeof(char *));
	if (!library)
		return (0);

	// Opening 'library_txt' 
    library_txt = fopen("library.txt" , "r");
	if(!library_txt)
		return(0);

	// Dublicating content of 'library_txt' into 'library'
	for (int i = 0; i < max_amount; i++)
		if (fgets (tmp, 20, library_txt) != NULL)
			library[i] = strdup(tmp);

	// Closing 'library_txt' and returning 'library'
	fclose(library_txt);
    return (library);
}