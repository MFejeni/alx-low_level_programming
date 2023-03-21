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
		for (col = 0; col <= 9; col++)
		{
			if (col != 9)
			{
				putchar_digit(row * col);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				putchar_digit(row * col);
				_putchar('\n');
			}
		}
	}
}
