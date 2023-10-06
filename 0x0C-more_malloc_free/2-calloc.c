#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of elements in the array
 * @size: Size of each element
 *
 * Return: A pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int k;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < (nmemb * size); k++)
		*((char *)ptr + k) = 0;

	return (ptr);
}

