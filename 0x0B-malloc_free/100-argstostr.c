#include "main.h"

/**
 * _strcat - Concat string, src appended to dest
 *
 * @dest: the destination string
 * @src: the source string
 * Return: Concat newString to dest
 */
char *_strcat(char *dest, char *src)
{
        int a, j;

        for (a = 0; dest[a] != '\0'; a++)
                ;
        for (j = 0; src[j] != '\0'; j++)
        {
                dest[a] = src[j];
                a++;
        }
        return (dest);
}

/**
 * _strlen - Return the number of the length of the string
 *
 * @s: the string to check
 *
 * Return: the string length
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
		;
	return (a);
}

/**
 * argstostr - Concats argv to new string
 *
 * @ac: Argument count in function
 * @av: Arguments of function
 *
 * Return: Returns a pointer to a new string, or NULL if it fails
 */

char *argstostr(int ac, char **av)
{
	int index, sumString;
	char *newString;

	sumString = 1;

	if (ac == 0 || av == NULL)
		return (0);
	for (index = 0; index < ac && av[index]; index++)
	{
		sumString += _strlen(av[index]);
	}
	newString = malloc((sumString * sizeof(char)) + ac);
	for (index = 0; index < ac && av[index]; index++)
	{
		newString = _strcat(newString, av[index]);
		newString = _strcat(newString, "\n");
	}
	if (newString == NULL)
		return (NULL);
	return (newString);
}
