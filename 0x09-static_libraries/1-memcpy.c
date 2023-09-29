#include "main.h"

/**
 * _memcpy - This is my funcion copy Src to dest
 * @dest: my result
 * @src: my string
 * @n: n is my number bytes to copy
 *
 * Return: my string copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *pDst = dest;
	char const *pSrc =  src;

	for (i = 0; i < n; i++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
}
