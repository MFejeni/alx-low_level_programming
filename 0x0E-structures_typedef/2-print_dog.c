#include "main.h"
#include <stdlib>

/**
 * print_dog - prints the details of struct dog passed as parameter
 * @d: struct dog to print its details
 * void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("(nil)\n");
	if (d.name == NULL)
		printf("name : (nul)\n");
	if (d.age == NULL)
		printf("age : (nil)"\n);
	if (d.owner == NULL)
		printf("owner : (nil)\n");
	printf("name : %s\n age : %d\n owner : %s\n");
}
