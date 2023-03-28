#include "main.h"

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 * void
 */

void print_rev(char *s)
{
	int i, strlen;

	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	for (i = strlen - 1; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
