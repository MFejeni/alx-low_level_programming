#include "main.h"
#include <stdlib.h>


/**
 * array_range - creates pointer from min to max
 * @min: first number to max
 * @max: last number in array
 * Return: NULL if min > max or if malloc fails, pointer of an array otherwise
 */

int *array_range(int min, int max)
{
	int *array_ptr, i, arrlen;

	arrlen = max - min + 1;
	if (min > max)
		return (NULL);
	array_ptr = malloc(sizeof(int *) * (arrlen));
	if (array_ptr == NULL)
		return (NULL);

	for (i = 0; i <= arrlen; i++)
		array_ptr[i] = min++;
	return (array_ptr);
}
