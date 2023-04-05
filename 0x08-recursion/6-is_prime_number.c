#include "main.h"

/**
 * is_prime_number - checks weather a number is prime number
 * @n: number to check
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	int num = 2;

	while (n >= num)
	{
		if (n % num == 0)
			return (0);
		num++;
	}
	return (1);
}
