#include <unistd.h>
#include "main.h"

/**
 * _putchar - prints char
 * @c: char to print
 * Return: -1 for error, 1 otherwise
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
