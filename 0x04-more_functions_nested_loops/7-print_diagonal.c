#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int slash;

	for (slash = 0; slash < n; slash++)
	{
		_putchar('\\');
	}
		_putchar('\n');
}
