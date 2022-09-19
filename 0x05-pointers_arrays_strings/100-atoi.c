#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: the int converted from the string
 */

int _atoi(char *s)
{
	int num1 = 1;
	unsigned int num2 = 0;

	do
	{
		if (*s == '-')
		{
			num1 *= -1;
		}
		else if (*s >= '0' && *s <= '9')
		{
			num2 = (num2 * 10) + (*s - '0');
		}
		else if (num2 > 0)
		{
			break;
		}
	}
	while (*s++);
	
	return (num1 * num2);
}
