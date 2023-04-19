#include "main.h"

/**
 * array_iterator - function that allows a function pointer to perform
 * a certain action on each and every item in an array
 * @array: array used to perform action in its elements
 * @size: size of an array
 * @action: function pointer to perform actions
 * void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
		action(array[i]);
}
