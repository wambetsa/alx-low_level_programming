#include "main.h"
/**
 * rot13 - Write a function that encodes a string using rot13
 *
 * @hi: This is my input string
 *
 * Return: String converted to rot13
 *
 */

char *rot13(char *hi)
{
	int i, count;

	char minus[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char mayus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; hi[i] != '\0'; ++i)
	{
		for (count = 0; minus[count] != '\0' ; count++)
		{
			if (hi[i] == minus[count])
			{
				hi[i] = mayus[count];
				break;
			}
		}
	}
	hi[i] = '\0';
	return (hi);
}
