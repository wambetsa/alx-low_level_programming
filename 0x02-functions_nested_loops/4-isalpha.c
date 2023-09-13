#include "main.h"

/**
 * _isalpha - Check description
 * @c: Is the input character or argument
 * Description: function returns 1 if the character is a letter
 * lower or upper case.
 * Return: 1 or 0 in otherwise.
 */
int _isalpha(int c)
{
	char lowercase, uppercase;
	int isletter = 0;

	for (lowercase= 'a'; lowercase <= 'z'; lowercase++)
	{
		for (uppercase = 'A'; uppercase <= 'Z'; uppercase++)
		{
			if (c == lowercase || c == uppercase)
				isletter = 1;
		}
	}
	return (isletter);
}
