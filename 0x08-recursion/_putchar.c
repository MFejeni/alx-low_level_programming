#include <unistd.h>
#include "main.h"

/**
 * _putchar - print char c
 * @c: char to print
 * Return: -1 and error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
