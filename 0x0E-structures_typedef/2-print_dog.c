#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_dog - prints the details of struct dog passed as parameter
 * @d: struct dog to print its details
 * void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	if (d -> name == NULL)
		printf("name : (nil)\n");
	else
		printf("name : %s\n", d -> name);
	printf("age : %f\n", d -> age);
	if (d -> owner == NULL)
		printf("owner : (nil)\n");
	else
		printf("owner : %s\n", d -> owner);
}
