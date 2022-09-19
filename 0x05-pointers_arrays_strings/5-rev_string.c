#include "main.h"

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char c;

	int i, j, k;

	i = 0;
	j = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	j = i - 1;

	for (k = 0; k < i / 2; k++)
	{
		c = s[k];
		s[k] = s[j];
		s[j--] = c;
	}
}
