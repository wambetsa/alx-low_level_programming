#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints coints left
 * @args: the paramater Entry
 * @argv: the number of argumets
 * Return: zero or one number of argumets
 */

int main(int args, char *argv[])
{
	int  k, coins = 0;

	if (args != 2)
	{
		printf("Error\n");
		return (1);
	}
	k = atoi(argv[1]);
	if (k < 0)
	{
		printf("0\n");
		return (0);
	}
	for (; k >= 0;)
	{
		if (k >= 25)
			k -= 25;

		else if (k >= 10)
			k -= 10;

		else if (k >= 5)
			k -= 5;

		else if (k >= 2)
			k -= 2;

		else if (k >= 1)
			k -= 1;
		else
			break;
		coins += 1;
	}
	printf("%d\n", coins);
	return (0);
}
