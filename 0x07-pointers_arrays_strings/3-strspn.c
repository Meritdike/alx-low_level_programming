#include "main.h"

/**
 * _strspn - gets lengthof a prefix substring
 * @s: string to check
 * @accept: character to check against
 * Return: number of bytes of s in accept
 */

unsigned int _strspn(char *s, char *accept);
{
	unsigned int m, n;

	for (m = 0; s[m]; m++)
	{
		for (n = 0; accept[n]; n++)
		{
			if (s[m] == accept[n])
				break;
		}
		if (!accept[n])
			break;
	}
		return (m);
}
