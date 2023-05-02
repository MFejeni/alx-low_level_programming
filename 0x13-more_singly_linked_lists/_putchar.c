#include "lists.h"
#include <unistd.h>

/**
 * _putchar - prints one char
 * @c: char to be printed
 * Return: number of chars printed
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * put_num - prints number using _putchar
 * @num: number to be printed
 * Return: 0 for sucess
 */

int put_num(int num)
{
	if (num > 9 && num < 100)
		_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
