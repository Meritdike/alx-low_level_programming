#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char **argv)
{
	int i, minNum, result;

	int cents[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	minNum = atoi(argv[1]);
	result = 0;

	if (minNum < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && i >= 0; i++)
	{
		while (minNum >= cents[i])
		{
			result++;
			minNum -= cents[i];
		}
	}
		printf("%d\n", result);
		return (0);
}
