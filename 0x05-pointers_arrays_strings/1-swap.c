#include "main.h"

/**
 * swap_int - swaps the  2 input parameters
 * @a: first value to swap with b
 * @b: second value to swap
 * void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = &a;
	*a = &b;
	*b = &c;
}
