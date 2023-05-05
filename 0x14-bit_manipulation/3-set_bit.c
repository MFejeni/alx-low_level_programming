#include "main.c"

/**
 * set_bit - sets a value of a bit to 1 at a given index
 * @n: value to set its bit
 * @index: index of n to set bit
 * Return: 1 if it works, -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);
	*n ^= (1 << index);
	return (1);
}