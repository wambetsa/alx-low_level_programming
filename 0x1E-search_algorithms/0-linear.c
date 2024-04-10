#include "search_algos.h"

/**
 * linear_search - searches for a value in array of int
 * using a linear search algorithm
 *
 * @array: input array
 * @size: array size
 * @value: value searched
 * Return: Always EXIT_SUCCESS
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
