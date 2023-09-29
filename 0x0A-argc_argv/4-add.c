#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * main - Program that adds positive numbers

 * @argc: The argument count
 * @argv: The argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int sum = 0, j;

	if (argc > 1)
	{
		for (j = 1; j < argc; j++)
		{
			int a;
			char *str;

			str = argv[j];
			for (a = 0; str[a] != '\0'; a++)
			{
				if (str[a] < 48 || str[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (j = 1; j < argc; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d\n", sum);
	return (0);
}
