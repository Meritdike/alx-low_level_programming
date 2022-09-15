#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
 */

void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i, hash;

		for (i = 0; i < size; i++)
		{
			for (hash = 0; hash < size; hash++)
			{
				_putchar('#');
			}
				_putchar('\n');
		}
	}
}
