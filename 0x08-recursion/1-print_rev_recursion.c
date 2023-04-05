#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse using recursion
 * @s: string to print in reverse
 * void
 */

void _print_rev_recursion(char *s)
{
	int strlen;

	strlen = 0;
	if (s[strlen] != '\0')
		_putchar(_print_rev_recursion(s - s[strlen++]));
}
