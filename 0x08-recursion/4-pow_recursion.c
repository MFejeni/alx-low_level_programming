#include "main.h"

/**
 * _pow_recursion - exponent of x and y
 * @x: base
 * @y: exponent of x
 * Return: exponent of y to x
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
