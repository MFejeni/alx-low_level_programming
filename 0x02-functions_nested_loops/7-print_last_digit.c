#include "main.h"

/**
 * print_last_digit - prints the last digit of an int
 * @n: checking the last digit from n
 * Return: the last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
	{
		last = -1 * (n % 10);
	}
	else
	{
		last = n % 10;
	}
	_putchar(last + 48);
	return (last);
}
