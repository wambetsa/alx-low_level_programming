#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * if NULL passes, treat it as an empty string
 * The function return NULL on failure
 *
 * @s1: the output string
 * @s2: the input string
 *
 * Return: The returned pointer point to newly allocated space
 * memory containing the contents of s1 s2 and null
 */

char *str_concat(char *s1, char *s2)
{
	int a, j;
	char *s;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (a = 0; s1[a] != '\0'; a++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}

	s = (char *)  malloc(((a + j) + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		s[a] = s1[a];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[a] = s2[j];
		a++;
	}
	return (s);
}
