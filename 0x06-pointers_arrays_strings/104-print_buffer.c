#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a s bytes of a buffer
 * @c: buffer to print
 * @s: bytes of buffer to print
 * @l: line of buffer to print
 * Return: void
 */

void print_line(char *c, int s, int l)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		if (i <= s)
		{
			printf("%02x", c[l * 10 + i]);
		}
		else
		{
			printf("  ");
		}
		if (i % 2)
		{
			_putchar(' ');
		}
	}

	for (j = 0; j <= s; j++)
	{
		if (c[l * 10 + j] > 31 && c[l * 10 + j] < 127)
		{
			_putchar(c[l * 10 + j]);
		}
		else
		{
			_putchar('.');
		}
	}
}

/**
 * print_buffer - prints a buffer
 * @b: buffer to print
 * @size: size of buffer
 * Reurn: void
 */

void print_buffer(char *b, int size)
{
	int k;

	for (k = 0; k <= (size - 1) / 10 && size; k++)
	{
		printf("%08x: ", k * 10);
		if (k < size / 10)
		{
			print_line(b, 9, k);
		}
		else
		{
			print_line(b, size % 10 - 1, k);
		}
			_putchar('\n');
	}
		if (size == 0)
		{
			_putchar('\n');
		}
}
