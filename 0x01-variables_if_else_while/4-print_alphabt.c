#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabt;

	for (alphabt = 'a'; alphabt <= 'z'; alphabt++)
	{
		if (alphabt =='e' && alphabt == 'q')
		{
			putchar(alphabt);
		}
	}
			putchar('\n');

	return (0);
}
