#include "main.h"

/**
 * int_index - function that returns the first elements index if function
 * pointer (cmp) given is true in that element
 * @array: array as parameter to choose from
 * @size: size of an array
 * @cmp: function pointer to check for what is required
 * Return: index of wanted value, -1 otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
			return (i);
	}
	return (-1);
}
