#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size size, containing c
 * @size: size of an array
 * @c: array to contain char c
 * Return: NULL if size is 0, or if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
	free(arr);
}
