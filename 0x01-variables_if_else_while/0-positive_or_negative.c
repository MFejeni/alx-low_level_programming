#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the random number if is positive or negative
 *
 * Return: 0 for Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%lu is negative");
	}
	if (n > 0)
	{
		printf("%lu is positive");
	}
	else
	{
		printf("%lu is zero");
	}
	return (0);
}
