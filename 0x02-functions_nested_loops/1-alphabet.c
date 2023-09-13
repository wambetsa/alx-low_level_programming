#include "main.h"

/**
 * print_alphabet - short description
 * Description: prints the alphabet, in lowercase, followed by a new line.
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
