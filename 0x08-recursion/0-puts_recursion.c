#include "main.h"

/**
 * _puts_recursion - prints in recursion similar to puts
 * @s: string to print
 * void
 */

void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s++);
}
