#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	char upper;
	int x;

	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		if (upper == c)
		{
			x = 1;
		}
		else
		{
			x = 0;
		}
	}

	return (x);
}
