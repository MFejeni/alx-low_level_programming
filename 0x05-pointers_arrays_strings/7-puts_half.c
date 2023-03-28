#include "main.h"

/**
 * puts_half - prints half of the string
 * @str: string to print from
 * void
 */

void puts_half(char *str)
{
	int sLen, strlen, i;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;

	if (strlen % 2 == 0)
		sLen = (strlen / 2) + 1;
	else
		sLen = ((strlen - 1) / 2) + 1;

	for (i = sLen; i < strlen; i++)
		_putchar(str[i]);
	_putchar('\n');
}
