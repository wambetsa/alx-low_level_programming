#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *malloc_checked function that allocates memory using malloc
 *@s: point of allocated space
 *
 *return : s
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
