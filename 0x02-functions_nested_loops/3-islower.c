#include "main.h"
/**
 * int _islower - Check description
 * @c: is the input character or argument of the function
 * Description: _islower(int c) function that checks for lowercase character and returns 1 if c is lowercase or 0 otherwise
 * Return: Nothing.
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
