#include "main.h"
/**
 * _islower - Check description
 * @c: is the input character or argument of the function
 * Description: _islower(int c) function function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char j;
	int lowercase = 0;

	for (j = 'a'; j <= 'z'; j++)
	{
		if (j == c)
			lowercase = 1;
	}
	return (lowercase);
}
