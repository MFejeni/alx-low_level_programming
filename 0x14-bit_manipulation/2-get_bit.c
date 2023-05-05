#include "main.h"

/**
 * get_bit - gets the value of bit at a given index
 * @n: bit to be determine by index
 * @index: index to determine bit.
 * Return: -1 if there is an error, value of bit at index Otherwise
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
