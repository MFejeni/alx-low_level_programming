#include "main.h"

/**
 * is_prime_number - checks weather a number is prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{

	if (n == 1)
		return (1);
	else if (n <= 0)
		return (0);
	return (prime_number(n, 2));
}

/**
 * prime_number - determine n if is prime number
 * @y: to be used when calling recursion
 * @x: n
 * Return: 1 if n is a prime number, 0 otherwise
 */

int prime_number(int x, int y)
{
	if (x == y)
		return (1);
	if (x % y == 0)
		return (0);
	return (prime_number(x, y + 1));
}
