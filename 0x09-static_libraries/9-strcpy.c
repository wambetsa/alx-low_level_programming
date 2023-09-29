#include "main.h"

/**
 * _strcpy - copies string into a variable
 * @dest: The destiny
 * @src: The copy src
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
