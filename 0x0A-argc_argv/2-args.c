#include <stdio.h>
/**
 * main - Write a program that prints all arguments it receives
 *        All arguments should be printed, including the first on
 *
 * @argc: The argument count 
 * @argv: The argument vector
 *
 * Return: 0;
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
