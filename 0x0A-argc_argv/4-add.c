#include "main.h"

/**
 * num - iterate through each argv to test if it's a number
 * @a: a argv
 * Return: true only if entire string is a number, false if not
 */

bool num(char *a)
{
	int i;

	for (i = 0; a[i]; i++)
	{
		if (!(a[i] >= 0 && a[i] < 10))
		{
			return (0);
		}
		return (1);
	}
}

/**
 * main - print sum if all arguments given are numbers
 * @argc: argument counter
 * @argv: arguments
 * Return: 0 on success, 1 if an argument wasn't a number
 */

int main(int argc, char **argv)
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < argc; i++)
	{
		if (num(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		printf("%d\n", sum);
		return (0);
	}
}
