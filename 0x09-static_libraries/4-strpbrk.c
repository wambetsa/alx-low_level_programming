#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - my function
 * @s: my entry
 * @accept: the second entry
 * Return: my return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (NULL);
}
