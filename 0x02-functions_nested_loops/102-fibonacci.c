#include <stdio.h>

/**
 * main - prints first 50 fibonacci numbers
 * Return: 0 for success
 */

int main(void)
{
	long int fib0, fib1, fib2;
       
	int i;

	fib1 = 1;
	fib2 = 2;
	fib0 = 0;
	printf("%lu, ", fib1);
	for (i = 1; i <= 50; i++)
	{
		printf("%lu, ", fib2);
		fib0 = fib2;
		fib2 = fib1 + fib2;
		fib1 = fib0;
	}
	putchar('\n');
	return (0);
}
