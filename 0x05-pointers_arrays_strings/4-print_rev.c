#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: string to be printed
 */
void print_rev(char *s)
{
	int i, k;

	k = strlen(s);

	for (i = k; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
