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
		int row, col, product;

		for (row = 0; row <= n; row++)
		{
			_putchar(48);
			for (col = 1; col <= n; col++)
			{
				_putchar(',');
				_putchar(' ');
				product = row * col;

				if (product <= 9)
					_putchar(' ');
				if (product <= 99)
					_putchar(' ');
				if(product >= 100)
				{
					_putchar((product / 100) + 48);
					_putchar(((product / 10) % 10) + 48);
				}
				else if (product <= 99 && product >= 10)
					_putchar((product / 10) + 48);
			}
			_putchar('\n');
		}
	}
}
