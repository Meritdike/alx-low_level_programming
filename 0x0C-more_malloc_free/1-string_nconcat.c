#include "main.h"

/**
 * string_nconcat - Concatenates two strings using at
 * most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 * Return: If the function fails - NULL
 * else return a pointer to the concatenated space in memory.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len = n, index;

	if (s1 == 0)
		s1 = "";

	if (s2 == 0)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == 0)
		return (NULL);

	len = 0;

	for (index = 0; s1[index]; index)
		concat[len++] = s1[index];

	concat[len] = '\0';

	return (concat);
}
