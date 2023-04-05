#include "main.h"

/**
 * _sqrt_recursion - returns a square root of a number, -1 if does not have
 * @n: number to determine its square root
 * Return: -1 if there is no square root
 */

int _sqrt_recursion(int n)
{
	int sqrt;

	sqrt = n - 1;
	if (sqrt * sqrt == n)
		return (sqrt);
	else if (n >= 0)
		return (_sqrt_recursion(n - 1));
	else
		return (-1);
}
