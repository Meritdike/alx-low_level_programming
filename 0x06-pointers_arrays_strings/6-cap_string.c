#include "main.h"

/**
 * cap_string - capitalizes everey word of a string
 * @s: string to modify
 * Return: the resulting string
 */

char *cap_string(char *s)
{
	int i, j;
	char separators[13] = {' ', '\t', '\n', ',', ';',
			'.', '!', '?', '"', '(', ')', '{', '}'}

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}

		for (j = 0; j < 13; j++)
		{
			if (s[i] == separators[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] -= 32;
			}
		}
	}
}
