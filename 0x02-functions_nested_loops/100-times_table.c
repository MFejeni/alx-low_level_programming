#include "main.h"

/**
 * print_times_table - prints n by n table that is greater than 0
 * @n: n by table
 * void
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int row, col;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col != n)
				{
					printf("%d,", row * col);
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					printf("%d\n", row * col);
				}
			}
		}
	}
}
