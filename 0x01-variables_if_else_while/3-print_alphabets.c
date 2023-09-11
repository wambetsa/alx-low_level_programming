#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabetLower;
	for (alphabetLower = 'a'; alphabetLower <= 'z'; alphabetLower++)
	{
		putchar(alphabetLower);
	}
        for (alphabetLower = 'A'; alphabetLower <= 'Z'; alphabetLower++)
        {
                putchar(alphabetLower);
        }
	putchar('\n');

	return (0);
}
