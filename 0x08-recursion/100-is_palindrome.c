#include "main.h"

/**
  * _strlength - checks the length of a string
  * @s: is the string
  * Return: return the length of the string
**/
int _strlength(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlength(s + 1));
}

/**
 * checkpal - checks if the string is palindrome
 * @i: is the index
 * @ls: is the length of the string
 * @s: is the string
 * Return: 1 if is polindrome or 0 if not
**/
int checkpal(int i, int ls, char *s)
{
	if (ls > 0)
	{
		if (s[i] == s[ls])
		{
			return (checkpal(i + 1, ls - 1, s));
		}
		else if (s[i] != s[ls])
		{
			return (0);
		}
		else
		{
			return (1);
		}
	}
	return (1);
}


/**
  * is_palindrome - Checks if a string is a palindrome
  * @s: is the string
  * Return: return 1 if the string is a palindrome or 0 otherwise
**/
int is_palindrome(char *s)
{
	return (checkpal(0, _strlength(s) - 1, s));
}
