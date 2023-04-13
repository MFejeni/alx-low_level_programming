#include "main.h"
#include <stdlib.h>
/**
* malloc_checked - allocates memory using malloc
* @b: parameter
* Return: Returns a pointer to allocated memory
**/
void *malloc_checked(unsigned int b)
{
	unsigned int *a;

	a = malloc(b);

	if (a == NULL)
		exit(98);
	return (a);
}
