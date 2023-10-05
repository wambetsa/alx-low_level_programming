#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: length of allocated space
 *
 * Return: Returns pointer to allocated space
 **/
void *malloc_checked(unsigned int b)
{
	void *s;
	s = malloc(b);

	if (s == NULL)
	{
		exit(98);
	}
	return (s);
}
