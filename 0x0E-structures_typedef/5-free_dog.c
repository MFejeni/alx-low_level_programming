#include "dog.h"
#include "main.h"
#include <stdlib.h>

/**
 * free_dog - frees the struct d (dog_t) parameter passed
 * @d: struct dog to free
 * void
 */

void free_dog(dog_t *d)
{
	free(d);
}
