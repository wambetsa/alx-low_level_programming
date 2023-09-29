#include "main.h"

/**
 * _islower - Check if the entry is in lower.
 * @c: the entry
 *
 * Return: Always 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
