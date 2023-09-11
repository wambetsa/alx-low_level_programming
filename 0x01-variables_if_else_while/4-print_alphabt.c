#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alpha, q, e;
	q = 'q';
	e = 'e';
	for(alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if(q != 'q' || e != 'e')
		{
			putchar(alpha);
		}
		putchar('\n');
	}
	return (0);
}
