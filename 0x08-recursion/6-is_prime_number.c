#include "main.h"

/**
 * is_prime_number - checks weather a number is prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int num = 2;

	if (n == 1)
		return (1);
	else if (n <= 0)
		return (0);
	else if (n >= num)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	is_prime_number(n - 1);
	return (1);
}
