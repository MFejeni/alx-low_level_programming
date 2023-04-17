#include "main.h"
#include <stdlib>

#include "dog.h"

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
	d.name = name;
	d.age = age;
	d.owner = owner;
}
