#include "main.h"

/**
 *_strcat - Write a function that concatenates two strings.
 *
 *@dest: This is the output dest
 *@src: This is the input source
 *
 * Return: This return to dest, that concatenates two strings
 */

char *_strcat(char *dest, char *src)
{
	int i, k;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i] = src[k];
		i++;
	}
	return (dest);
}
