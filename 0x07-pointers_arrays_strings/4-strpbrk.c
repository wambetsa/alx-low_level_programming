#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any set of bytes.
 * The _strpbrk() function locates the first occurrence in the strings 
 * of the bytes in the string accept
 *
 * @s: the input string
 * @accept: the string to locate
 *
 * Return: Returns a pointer to the byte in s that matches one of the bytes in
 * accept, or NULL if no such byte is located
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, counter;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (counter = 0; accept[counter] != '\0'; counter++)
		{
			if (accept[counter] == s[i])
			{
				return (&s[i]);
			}
		}
	}
	return (NULL);
}
