#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 * @ptr: pointer previously allocated
 * @old_size: old size of a memory
 * @new_size: new size of a memory
 * Retur: NULL if function fails, otherwise ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *locptr, *cpyptr = ptr;
	unsigned int i, j;

	j = new_size;
	if (old_size == new_size)
		return (ptr);
	else if (ptr == NULL)
	{
		locptr = malloc(new_size);
		return (locptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	locptr = malloc(new_size);
	if (locptr == NULL)
		return (NULL);
	if (new_size > old_size)
		j = old_size;
	for (i = 0; i < j; i++)
		locptr[i] = cpyptr[i];
	free(ptr);
	return (locptr);
}
