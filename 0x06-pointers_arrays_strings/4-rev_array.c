#include "main.h"

/**
 * reverse_array - Write a function that reverses the content of an array of
 * integers.
 *
 * @a: This is the input array
 * @n: This is the positions have the array
 *
 */
void reverse_array(int *a, int n)
{
	int i, l;

	l = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		int s, end;

		s = a[i];
		end = a[l];
		a[i] = end;
		a[l] = s;
		l--;
	}
}
