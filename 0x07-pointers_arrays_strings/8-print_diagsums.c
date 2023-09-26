#include "main.h"

/**
 * print_diagsums - print the sum the diognals of a square matrix
 *
 * @a: the array to sum
 * @size: the length of the array
 */

void print_diagsums(int *a, int size)
{
	int asc, desc, i, sumAsc, sumDesc;

	sumAsc = sumDesc = 0;
	asc = 0;
	desc = size - 1;
	for (i = 0; i < size; i++)
	{
		sumAsc += *(a + i * size + asc);
		sumDesc += *(a + i * size + desc);
		asc += 1;
		desc -= 1;
	}
	printf("%d, %d\n", sumAsc, sumDesc);
}
