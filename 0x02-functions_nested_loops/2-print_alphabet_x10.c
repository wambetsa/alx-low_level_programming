#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: repeats the alphabet in lowercase followed by a new line
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char k;
	int i = 0;

	while (i < 10)
	{
		for (k = 'a'; k <= 'z'; k++)
			_putchar(k);
		_putchar('\n');
		i++;
	}
}
