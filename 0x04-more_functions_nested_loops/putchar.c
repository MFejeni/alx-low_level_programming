#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints char
 * @c: input char to be printed
 * void
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
