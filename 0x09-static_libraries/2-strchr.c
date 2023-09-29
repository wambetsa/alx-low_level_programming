#include "main.h"
#include <stddef.h>
/**
 * _strchr - my funcion
 * @s: my string of char
 * @c: my character
 * Return: my resulti
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
}
