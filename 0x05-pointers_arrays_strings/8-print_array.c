#include "main.h"
#include <stdio.h>

/**
 * print_array - prints the n times elements in an array
 * @a: an array
 * @n: numbers to print
 * void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
		printf("%d, ", a[i]);
	_putchar('\n');
}
