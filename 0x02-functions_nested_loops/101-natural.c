#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int j, s = 0;

	for (j = 0; j < 1024; j++)
	{
		if ((j % 5) == 0 || (j % 3) == 0)
			s += j;
	}
	printf("%d\n", s);

	return (0);
}
