#include "main.h"

/**
 * print_times_table - prints n by n table that is greater than 0 and less than 15
 * @n: n by table
 * void
 */

void print_times_table(int n)
{
	if (n < 0 || n > 15)
	{
		_putchar('N');
		_putchar('O');
	}
	else
	{
		int row, col;

		for (row = 0; row <= n; row++)
		{
			for (col = 0; col <= n; col++)
			{
				if (col != n)
				{
					_putchar(row*col);
					_putchar(',');
					_putchar(' ');
				}
				else
				{
					_putchar(row*col);
					_putchar('\n');
				}
			}
		}
	}
}
