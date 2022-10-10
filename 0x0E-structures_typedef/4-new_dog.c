#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (0);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (0);
	i = 0;
	while (name[i])
		i++;
	i++;
	dog->name = malloc(sizeof(char) * i)
	if (dog->name == NULL)
	{
		free(dog);
		return (0);
	}
	for (j = 0; j < i; j++)
		dog->name[j] = name[j];
	dog->age = age;
	k = 0;
	while (owner[k])
		k++;
	k++;
	dog->owner = malloc(sizeof(char) * k);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (0);
	}
	for (j = 0; j < k; j++)
		dog->owner[j] = owner[j];
	return (dog);
}
