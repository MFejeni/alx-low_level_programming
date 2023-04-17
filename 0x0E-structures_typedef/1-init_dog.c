#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes a struct called dog created in dog.h
 * @d: struct to initialize
 * @name: to initialize it to d.name
 * @age: d.age value
 * @owner: d.owner value
 * void
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
