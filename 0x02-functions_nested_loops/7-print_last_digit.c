#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @m: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int)
{
	int n;
	if (m < 0)
	{
		m = -m;
		n = m % 10;

		return (n);
	}
	else
	{
		m = m;
		n = m % 10;

		return (n);
	}
}
