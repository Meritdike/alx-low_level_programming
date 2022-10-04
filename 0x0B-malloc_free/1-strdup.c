#include "main.h"

/**
 * *_strdup - copies the string given as parameter
 *  @str: string to duplicate
 *  Return: pointer to the copied string (Success), NULL (Error)
 */

char *_strdup(char *str)
{
	char *dup;
	unsigned int index, len;

	index = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	while ((dup[index] = str[index]) != '\0')
		index++;

	return (dup);

}
