#include "main.h"

/**
 * print_last_digit - Check description
 * @k: An integer input or argument
 * Description: The function prints the last digit of number
 * Return: last digit of number k
 */
int print_last_digit(int k)
{
	int j;

	if (k < 0)
		j = -1 * (k % 10);
	else
		j = k % 10;

	_putchar((j % 10) + '0');
	return (j % 10);
}
