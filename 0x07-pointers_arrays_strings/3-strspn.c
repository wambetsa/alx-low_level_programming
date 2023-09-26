#include "main.h"
/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: the string literal
 * @accept: the second string
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int index, i, count;

	count = 0;
	for (index = 0; s[index] != '\0'; index++)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (accept[i] == s[index])
			{
				count++;
				break;
			}
		}
		if (accept[i] != s[index])
		{
		break;
		}
	}
	return (count);
}
