#include "main.h"

/**
 * _memset - Write a function that fills memory with a constant byte
 * The _memset() function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b
 *
 * @s: the output and the return
 * @b: this is the input string
 * @n: the number of bytes
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter;

	for (counter = 0; counter < n ; counter++)
	{
		s[counter] = b;
	}
	return (s);
}
