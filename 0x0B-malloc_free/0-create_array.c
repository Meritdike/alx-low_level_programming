#include "main.h"

/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array to create
 * @c: char to initialize the array c
 * Return: pointer to the array (Success), NULL (Error)
 */

char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *p;

	if (size == 0)
		return (NULL);
	p = (char *) malloc(sizeof(char) * size);

	if (p == 0)
		return (NULL);
	for (index = 0; index < size; index++)
		p[index] = c;

	p[index] = '\0';
	return (p);
}
