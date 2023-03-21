#include "main.h"

/**
 * putchar_digit - prints digits with putchar even if they are greater than 10
 * @n: n by n table
 * void
 */
void putchar_digit(int n)
{
	if (n <= 9 && n >= 0)
	{
		_putchar(n + 48);
	}
	else if (n > 9 && n <=99)
	{
		_putchar((n / 10) + 48); /*first digit */
		_putchar((n % 10) + 48); /* second digit */
	}
	else
	{
		_putchar((n / 100) + 48); /*first digit > 100 */
		_putchar(((n / 100) / 10) + 48); /* second digit */
		_putchar(((n / 100) % 10) + 48); /* third digit */
	}
}
