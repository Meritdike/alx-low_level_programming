#include "main.h"

/**
 * _strncat - concatenates n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index, len;

	index = 0;
	len = 0;

	while (dest[index] != '\0')
	{
		index++;
	}
	while (src[len] != '\0' && len < n)
	{
		dest[index] = src[len];
		index++;
		len++;
	}
	dest[index] = '\0';
	return (dest);
}
