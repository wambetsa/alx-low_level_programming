#include "main.h"

/**
 * wildcmp - Compares two strings with wildcard support.
 * @s1: The first string.
 * @s2: The second string with wildcard '*'.
 *
 * Return: 1 if the strings can be considered identical, otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if ((*s1 == '\0') && (*s2 == '\0'))
	{
		return (1);
	}
	if ((*s1 == *s2) || (*s2 == '*'))
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		int empty_match = wildcmp(s1, s2 + 1);
		int multiple_match = wildcmp(s1 + 1, s2);
		return ((empty_match) || (multiple_match));
	}
	return (0);
}
