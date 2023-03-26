#include "main.h"

/**
 * print_diagonal - prints \ diogonally
 * @n: number of \ to be printed
 * void
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= n; j++)
			{
				if (i == j)
					_putchar('\\');
			}
		}
	}
	_putchar('\n');
}
