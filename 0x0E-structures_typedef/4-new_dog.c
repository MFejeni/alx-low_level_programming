#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new struct for struct dog
 * @name: new dogs name
 * @age: new dogs age
 * @owner: new dogs owner
 * Return: new dog with details, NULL otherwise
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
	free(dog);
}
