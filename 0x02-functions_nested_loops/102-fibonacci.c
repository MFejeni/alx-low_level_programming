#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	int fib0, fib1, fib2, i;

	fib1 = 1;
	fib2 = 2;
	fib0 = 0;
	printf("%d", fib1);
	for (i = 1; i <= 50; i++)
	{
		printf("%d, ", fib2);
		fib0 = fib2;
		fib2 = fib1 + fib2;
		fib1 = fib0;
	}
	putchar('\n');
	return (0);
}
