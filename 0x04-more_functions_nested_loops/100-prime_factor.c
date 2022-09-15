#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long n = 612852475143;
	unsigned long divisor = 2;

	while (divisor < n)
	{
		if (n % divisor == 0)
		{
			n = n / divisor;
		}
			divisor++;
	}
	printf("%ld\n", n);
	return (0);
}
