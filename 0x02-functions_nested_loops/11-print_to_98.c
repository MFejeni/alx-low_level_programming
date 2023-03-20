#include "main.h"

/**
 * print_to_98 - prints from number from parameter to 98
 * @n: starting number to print from
 * void
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			if (i != 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar(' ');
			}
			else
			{
				_putchar(i);
				_putchar('\n');
			}
		}
	}
	else
	{
		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				_putchar(i);
				_putchar(',');
				_putchar('\n');
			}
			else
			{
				_putchar(i);
				_putchar('\n');
			}
		}
	}
}

