#include "main.h"

/**
 * print_triangle - prints triangle of size using '#'
 * @size: size of triangle to print
 * void
 */

void print_triangle(int size);
{
	int i, side;

	for (i = 1; i < size; i++)
	{
		for (side = 1; side < size; side++)
		{
			if (side >= size - i)
				_putchar('#');
			else
				_putchar(' ');
		}
	}
	_putchar('\n');
}
