#include <stdio.h>
#include <stdlib.h>

int is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int is_positive_number(char *str)
{
	if (*str == '\0')
		return 0;

	while (*str)
	{
		if (!is_digit(*str))
		{
			return 0;
		}		
		str++;
	}

	return 1;
}

void multiply(char *num1, char *num2)
{
	int len1 = 0, len2 = 0, i, j, carry = 0;
	int *result;

	while (num1[len1])
		len1++;
	while (num2[len2])
		len2++;

	result = calloc(len1 + len2, sizeof(int));
	if (result == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	for (i = len1 - 1; i >= 0; i--)
	{
		carry = 0;
		for (j = len2 - 1; j >= 0; j--)
		{
		int product = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
		result[i + j + 1] = product % 10;
		carry = product / 10;
		}
		result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 - 1 && result[i] == 0)
		i++;

	if (i == len1 + len2 - 1)
		printf("0\n");
	else
	{
		while (i < len1 + len2)
		{
			printf("%d", result[i++]);
			printf("\n");
		}
	}

	free(result);
}

int main(int argc, char *argv[])
{
	if (argc != 3 || !is_positive_number(argv[1]) || !is_positive_number(argv[2]))
	{
		printf("Error\n");
		return 98;
	}

	multiply(argv[1], argv[2]);
	return 0;
}

