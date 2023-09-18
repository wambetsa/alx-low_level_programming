#include "main.h"

/**
 * puts2 - prints one char out of 2 of a string
 * followed by a new line
 * @str: string to print the chars from
 */
void puts2(char *str)
{
	int i, k;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}

	for (k = 0; k < i; k += 2)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
