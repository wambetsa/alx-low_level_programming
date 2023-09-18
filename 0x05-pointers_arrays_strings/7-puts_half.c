#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int mylen, n, i;

	mylen = 0;

	while (str[mylen] != '\0')
	{
		mylen++;
	}

	if (mylen % 2 == 0)
	{
		for (i = mylen / 2; str[i] != '\0'; i++)
		{
			_putchar(str[i]);
		}
	} else if (mylen % 2)
	{
		for (n = (mylen - 1) / 2; n < mylen - 1; n++)
		{
			_putchar(str[n + 1]);
		}
	}
	_putchar('\n');
}
