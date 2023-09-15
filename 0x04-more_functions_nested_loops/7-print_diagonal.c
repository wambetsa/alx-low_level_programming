#include "main.h"

/**
  * print_diagonal - Draws a diagonal lines according parameter
  * @n: The number of times to print diagonal lines
  *
  * Return: empty
  */
void print_diagonal(int n)
{
	char j, k;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for  (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}

	}
}
