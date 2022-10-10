#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints a struct dog
 * @d: struct dog to print
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;
	else if (d->name == NULL)
			d->name = "(nil)";
	else if (d->owner == NULL)
			d->owner ="(nil)";
	printf("Name: %s\nAge: (nil)\nOwner: %s\n", d->name, d->owner);

}
