#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: value to be set
 * @index: index to set bit
 * Return: 1 if it works, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}