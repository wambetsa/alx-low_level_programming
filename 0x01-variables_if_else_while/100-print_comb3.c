#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k, j;

	for (k = '0'; k < '9'; k++)
	{
		for (j = k + 1; j <= '9'; j++)
		{
			if (j != k)
			{
				putchar(k);
				putchar(j);

				if (k == '8' && j == '9')
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
