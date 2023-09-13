#include "main.h"

/**
 * print_sign - Check description
 * @n: An input number or argument
 * Description: The function prints the sign in a number
 * Return: 1 if number is positive o if number is 0 and
 * -1 if number is negative
 */
int print_sign(int n)
{
	int v;

	if (n > 0)
	{
		v = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		v = 0;
		_putchar('0');
	}
	else
	{
		v = -1;
		_putchar('-');
	}

	return (v);
}
