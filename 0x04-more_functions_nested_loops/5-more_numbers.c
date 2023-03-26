#include "main.h"

/**
 * more_numbers - prints 0 to 14 10 times
 * void
 */

void more_numbers(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 14; j++)
			put_digit(j);
		_putchar('\n');
	}
}
