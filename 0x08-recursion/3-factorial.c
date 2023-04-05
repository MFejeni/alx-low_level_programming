#include "main.h"

/**
 * factorial - factorial of a number using recursion
 * @n: number given as parameter
 * Return: factorial if n greater thn -1, -1 otherwise
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
