#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Write a function that prints the chessboard.
 *
 * @a: my variable
 *
 */

void print_chessboard(char (*a)[8])
{
	int counter, i;

	for (counter = 0; counter < 8; counter++)
	{
		for (i = 0; i < 8; i++)
		{
			_putchar(a[counter][i]);
		}
		_putchar('\n');
	}
}
