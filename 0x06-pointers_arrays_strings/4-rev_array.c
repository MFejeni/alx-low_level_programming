#include "main.h"

/**
 * reverse_array - reverses an aray
 * @a: array to reverse
 * @n: number of contents in an array
 * void
 */

void reverse_array(int *a, int n)
{
	int *b[n], i;

	for (i = 0; i < n; i++)
	{
		a[i] = b[--n];
	}
}
