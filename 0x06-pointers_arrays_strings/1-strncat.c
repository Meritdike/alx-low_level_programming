#include "main.h"

/**
 * *_strncat - copies a string
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 * Return: returns pointer to @dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index;

	index = 0;

	while (src[index] != '\0' && index < n)
	{
		dest[index] = src[index];
		index++;
	}
	while (index < n)
	{
		dest[index] = '\0';
		index++;
	}
	return (dest);
}
