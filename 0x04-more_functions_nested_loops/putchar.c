#include "main.h"

/**
 * _putchar - prints char
 * @c: input char to be printed
 * void
 */

void _putchar(int c)
{
	return (write(1, &c, 1));
}
