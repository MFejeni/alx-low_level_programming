#include <stdio.h>

/**
 * main - prints the sum of multiples
 * Return: 0 for success
 */

int main(void)
{
	int sum, i;

	sum = 0;
	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 && (i % 5 != 0))
			sum = sum + i;
		else if (i % 5 == 0 || i % 3 == 0)
			sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
