#include <unistd.h>

/**
 * _putchar print char passed by
 * @c: char to print
 * void
 */

void _putchar(char c)
{
	return (write(1, &c, 1));
}
