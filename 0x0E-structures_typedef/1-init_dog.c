#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes struct
 * @d:struct to be initialized
 * @name:item 1
 * @age:item 2
 * @owner:item 3
 * Return:void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
