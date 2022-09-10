#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: prints the lowercase alphabet in reverse, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char tebahpla;

	for (tebahpla = 'z'; tebahpla >= 'a'; tebahpla++)
	{
		putchar(tebahpla);
	}
		putchar('\n');

	return (0);
}
