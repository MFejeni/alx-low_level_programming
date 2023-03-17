#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Prints if the random number is greater than 5 of less
 * than 6 and greater
 * than 0
 *
 * Return: 0 for Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	char[] num = char[] n;
	int last_digit = int num[len(num)];

	if (last_digit > 5)
	{
		printf("Last digit of %lu is %lu and is greater than 5", n,
				last_digit);
	}
	if (last_digit < 6 && last_digit > 0)
	{
		printf("Last digit of %lu is %lu and is less than 6 and not 0", n,
				last_digit);
	}
	else
	{
		printf("Last digit of %lu is %lu and is 0", n, last_digit);
	}
	return (0);
}
