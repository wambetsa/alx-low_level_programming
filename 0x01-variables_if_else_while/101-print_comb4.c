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
	int i, j, q;

	for (i = '0'; i < '9'; i++)
	{
		for (j = i + 1; j <= '9'; j++)
		{
			for (q = j + 1; q <= '9'; q++)
			{
				if ((j != i) != q)
				{
					putchar(i);
					putchar(j);
					putchar(q);

					if (i == '7' && j == '8')
						continue;

					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
