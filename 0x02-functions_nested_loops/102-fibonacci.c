#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int fib1, fib2, i;

	fib1 = 0;
	fib2 = 1;
	for (i = 0; i <= 50; i++)
	{
		fib2 = fib2 + fib1;
		printf("%d, ", fib2);
		fib1 = fib2;
	}
	putchar('\n');
	return (0);
}
