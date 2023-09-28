#include "main.h"

/**
 * _sqrt_recursion - Calculates the natural square root of a number.
 * @n: The number for which to calculate the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have one.
 */

/**
 * myhelperfunction - Recursive helper function to find the square root.
 * @n: The number for which to calculate the square root.
 * @k: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if not found.
 */
int myhelperfunction(int n, int k)
{
	if (k * k == n)
	{
		return (k);
	}
	if (k * k > n)
	{
		return (-1);
	}
	return (myhelperfunction(n, k + 1));
}

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if ((n == 0) || (n == 1))
	{
		return (n);
	}
	return (myhelperfunction(n, 1));
}
