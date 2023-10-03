#include "main.h"
#include <stdlib.h>

/**
 * word_count - Counts the number of words in a string.
 * @str: The string to count words in.
 *
 * Return: The number of words in the string.
 */
int word_count(char *str)
{
	int count = 0;
	int in_word = 0;
	int i = 0;

	while (str[i])
	{
		if (str[i] == ' ')
			in_word = 0;
		else if (in_word == 0)
		{
			in_word = 1;
			count++;
		}
		i++;
	}

	return (count);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len = 0, words;
	char **word_array;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words = word_count(str);
	if (words == 0)
		return (NULL);

	word_array = malloc(sizeof(char *) * (words + 1));

	if (word_array == NULL)
		return (NULL);

	for (i = 0; i < words; i++)
	{
		while (str[len] == ' ')
			len++;

		for (j = len; str[j] && str[j] != ' '; j++)
			;
	
	word_array[i] = malloc(sizeof(char) * (j - len + 1));

	if (word_array[i] == NULL)
	{
		for (k = 0; k < i; k++)
			free(word_array[k]);
			free(word_array);
		return (NULL);
	}

	for (k = 0; k < (j - len); k++)
		word_array[i][k] = str[len + k];
		word_array[i][k] = '\0';
		len = j;
	}

	word_array[i] = NULL;

	return (word_array);
}
