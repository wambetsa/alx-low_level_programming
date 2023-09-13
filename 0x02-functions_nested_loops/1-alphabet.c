#include "main.h"

/**
 * print_alphabet function
 * Description: Prints alphabets in small case from a -z
 */
void print_alphabet(void)
{
	char k;

	for (k = 'a'; k <= 'z'; k++)
		_putchar(k);
	_putchar('\n');
}
