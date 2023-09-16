#include "main.h"

/**
  * print_triangle - Prints a triangle of squares according parameter
  * @size: The size of the squares triangle
  *
  * Return: empty
  */
void print_triangle(int size)
{
	int k, j, m;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (k = 0; k < size; k++)
		{
			for (j = size - k; j > 1; j--)
			{
				_putchar(32);
			}
			for (m = 0; m <= k; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
