#include "main.h"

/**
 * reverse_array - reverses an aray
 * @a: array to reverse
 * @n: number of contents in an array
 * void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	n = n - 1;
	i = 0;
	while (i <= n)
	{
		j = a[i];
		a[i++] = a[n];
		a[n--] = j;
	}
}
