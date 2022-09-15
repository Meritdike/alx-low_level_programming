#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int slash, space;

		for (slash = 0; slash < n; slash++)
		{
			for (space = 0; space < n; space++)
			{
				if (space == slash)
				{
					_putchar('\\');
				}
				else if (space < slash)
				{
					_putchar(' ');
				}
			}
				_putchar('\n');
		}
	}
}
