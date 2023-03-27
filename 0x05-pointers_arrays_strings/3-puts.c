#include "main.h"

/**
 * _puts - prints the string given as parameter
 * @str: to print
 * void
 */

void _puts(char *str)
{
	int i;

	for (i = 0; i <= _strlen(str); i++)
	{
		_putchar(str[i]);
	}
}
