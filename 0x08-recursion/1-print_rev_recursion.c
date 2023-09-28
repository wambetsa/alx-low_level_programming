#include "main.h"

/*
 * _print_rev_recursion - Write a function that prints a string in reverse.
 * @s: the argument of the function
 * base case checks if current character pointed by s  is not null terminator 
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
