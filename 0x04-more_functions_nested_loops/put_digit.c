#include "main.h"

/**
 * put_digit - prints numbers including numbers greater than 9
 * @num: number to print
 * void
 */

void put_digit(int num)
{
	if (num >= 0 && num <= 9)
		_putchar(num);
	else if (num >= 10 && num <= 99)
	{
		_putchar((num / 10) + 48);
		_putchar((num % 10) + 48);
	}
	else if (num >= 100 && num <= 999)
	{
		_putchar((num / 100) + 48);
		_putchar(((num / 100) / 10) + 48);
		_putchar((num / 10) + 48);
	}
}
