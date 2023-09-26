#include "main.h"

/**
 * _memcpy - Write a function that copies memory area.
 * The _memcpy() function copies n bytes from memory area src to memory area
 * dest
 *
 * @dest: the output string
 * @src: input string
 * @n: number bytes to copy
 *
 * Return: This is the string copied
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter;
	char *pDest = dest;
	char const *pSrc =  src;

	for (counter = 0; counter < n; counter++)
	{
		*pDest++ = *pSrc++;
	}
	return (dest);
}
