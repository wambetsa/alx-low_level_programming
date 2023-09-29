#include "main.h"

/**
 *_strcat - This is the main copy
 *@dest: The my dest
 *@src: The my source
 *
 * Return: This return to the result
 */

char *_strcat(char *dest, char *src)
{
	int c, b;

	for (c = 0; dest[c] != '\0'; c++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[c] = src[b];
	c++;
	}
	return (dest);
}
