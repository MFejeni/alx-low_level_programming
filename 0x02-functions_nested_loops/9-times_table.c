#include "main.h"

/**
 * times_table - prints 9-timetable
 * Return printed table
 */

void times_table(void)
{
	int row, col;

	for (row = 0; row <= 9; row++)
	{
		_putchar(48);
		for (col = 0; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			product = row * col
			if (col <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((product / 10) + 48);
			}
			_putchar((product % 10) + 48);
		}
		_putchar('\n');
	}
}
