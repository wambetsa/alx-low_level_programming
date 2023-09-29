#include "main.h"
/**
 * _strncpy - my main
 * @dest: my dest
 * @src: my source
 * @n: my N
 *
 *Return: THis is my return
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
}
