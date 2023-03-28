#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to print from
 * void
 */

void puts_half(char *str)
{
	int sLen;

	sLen = _strlen(str);
	if (sLen % 2 == 0)
		sLen = sLen / 2;
	else
		sLen = (sLen - 1) / 2;

	int i;

	for (i = sLen; i <= _strlen(str); i++)
		_putchar(str[i]);
	_putchar('\n');
}
