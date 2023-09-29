#include "main.h"

/**
 * _memset - This is my function copy the number the character to S
 * @s: The entry and return
 * @b: The character to copy
 * @n: The number of Bytes
 *
 * Return: This is my result and Return S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
}
