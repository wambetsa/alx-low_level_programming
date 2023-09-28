#include "main.h"

/**
 * check_palindrome - Recursive helper function to check for a palindrome.
 * @start: The pointer to the start of the string.
 * @end: The pointer to the end of the string.
 *
 * Return: 1 if the substring is a palindrome, 0 otherwise.
 */
int check_palindrome(char *start, char *end)
{
	if (start >= end)
	{
		return (1);
	}
	if (*start != *end)
	{
		return (0);
	}
	return check_palindrome(start + 1, end - 1);
}

/**
 * _strlen - Returns the length of a string.
 * @s: The string to calculate the length of.
 *
 * Return: The length of the string.
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s)
	{
		length++;
		s++;
	}
	return length;
}

/**
 * is_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: 1 if s is a palindrome, 0 otherwise.
 */
int is_palindrome(char *s)
{
        if ((*s == '\0') || (*(s + 1) == '\0'))
        {
                return (1);
        }
        return check_palindrome(s, s + _strlen(s) - 1);
}
