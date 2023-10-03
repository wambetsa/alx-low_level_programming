#include "main.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all the arguments of your program.
 * @ac: The argument count.
 * @av: The argument vector.
 *
 * Return: A pointer to the concatenated string, or NULL if it fails.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int i, j, k, len = 0;
	int total_len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		len++;
		total_len += len + 1; /* Add 1 for the newline character */
		len = 0;
	}

	concat_str = malloc(sizeof(char) * (total_len + 1)); /* Add 1 for the null terminator */

	if (concat_str == NULL)
		 return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
			concat_str[k++] = av[i][j];
			concat_str[k++] = '\n';
	}

	concat_str[k] = '\0';

	return (concat_str);
}

