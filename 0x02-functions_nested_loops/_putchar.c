#include <unistd.h>

/**
 * _putchar - prints a char
 * @c: char to be printed
 *
 * Return: 1 for success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
