#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * void
 */

void print_rev(char *s)
{
	int i;

	for (i = _strlen(s); i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
