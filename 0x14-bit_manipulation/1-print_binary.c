#include "main.h"

/**
 * print_binary - converts decimal to binary then prints it
 * @n: num to print in binary
 * void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if ((n >> 1) != 0)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

/**
 * _putchar - puts char
 * @c: char to be printed
 * Return: 0 for sucess
 */

int _putchar(char c)
{
	return (write(1, &c,  1));
}

