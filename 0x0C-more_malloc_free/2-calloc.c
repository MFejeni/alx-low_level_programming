#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory of an array of nmemb elements
 * @nmemb: number of elements in an array
 * @size: size bytes
 * Return: NULL if nmemb or size are 0 or if malloc fails, otherwise pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *strptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	strptr = malloc(nmemb * size);
	if (strptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		strptr[i] = 0;
	return (strptr);
}

