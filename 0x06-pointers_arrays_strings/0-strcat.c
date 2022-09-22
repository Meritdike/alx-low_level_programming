#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to add
 * Return: a pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int index, len;

	index = 0;
	len = 0;

	while (dest[index] != '\0')
	{
		index++;
	}

	while (src[len] != '\0')
	{
		dest[index] = src[len];
		index++;
		len++;
	}

	desk[index] = '\0';
	return (dest);
}
