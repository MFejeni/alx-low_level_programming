#include "main.h"

/**
 * _puts_recursion - prints in recursion similar to puts
 * @s: string to print
 * void
 */

void _puts_recursion(char *s)
{
	int strlen;

	strlen = 0;
	if (s[strlen] != '\0')
	{
		_putchar(_puts_recursion(s[strlen++]));
	}
	_putchar('\n');
}
