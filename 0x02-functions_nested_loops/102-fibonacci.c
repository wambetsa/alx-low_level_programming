#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int k;
	long int fibonacci[50];

	fibonacci[0] = 1;
	fibonacci[1] = 2;
	printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);

	for (k = 2; k < 50; k++)
	{
		fibonacci[k] = fibonacci[k - 1] + fibonacci[k - 2];
		if (k == 49)
			printf("%ld\n", fibonacci[k]);
		else
			printf("%ld, ", fibonacci[k]);
	}

	return (0);
}
