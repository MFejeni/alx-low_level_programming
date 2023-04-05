#include "main.h"

/**
 * _sqrt_recursion - returns a square root of a number, -1 if does not have
 * @n: number to determine its square root
 * Return: -1 if there is no square root
 */

int _sqrt_recursion(int n)
{
	return (root_det(n, 1));
}

/**
 * root_det - determines the root
 * @x: n
 * @y: to be recursive
 * Return: square root if it has, -1 otherwise
 */

int root_det(int x, int y)
{
	int sqrt;

	sqrt = y * y;
	if (sqrt == x)
		return (sqrt);
	if (sqrt > x)
		return (-1);
	return (root_det(x, y + 1));
}
