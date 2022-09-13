#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 *
 * @m: the int to extract the last digit from
 *
 * Return: value of the last digit
 */

int print_last_digit(int m)
{
	int lastNum;

	if (m < 0)
	{
		lastNum = (-1 * (m % 10));

		_putchar(lastNum + '0');

		return (lastNum);
	}
	else
	{
		lastNum = m % 10;

		_putchar(lastNum + '0');

		return (lastNum);
	}
}
