#include "main.h"

/**
 * print_binary - converts decimal to binary then prints it
 * @n: num to print in binary
 * void
 */

void print_binary(unsigned long int n)
{
	char str = "";

	while (n > 0)
	{
		n %= 2;
		strcat(str,string(n));
	}
	for (i = 0; i < strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
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
