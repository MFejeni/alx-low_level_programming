#include "main.h"

/**
 * times_table - prints 9-timetable
 * Return printed table
 */

void times_table(void)
{
	for (int row = 0; row <= 9; row++)
	{
		for (int col = 0; col <= 9; col++)
		{
			if (col != 9)
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
