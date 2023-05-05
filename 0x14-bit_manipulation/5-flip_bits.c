#include "main.h"

/**
 * flip_bits - determines the number of bits needed to flip to get from one
 * to another
 * @n: value from
 * @m: value to
 * Return: number of flips
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i, flip = n ^ m;

	for (i = 0; flip != 0; i++)
		flip &= (flip - 1);
	return (i);
}