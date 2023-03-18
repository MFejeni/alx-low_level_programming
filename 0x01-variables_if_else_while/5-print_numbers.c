#include <stdio.h>

/**
 * main - prints numbers of single digit ( less than 10)
 *
 * Returns 0 for success
 */

int main(void)
{
	int number = 0;

	while (number < 10)
	{
		printf("%d", number++);
	}
	putchar('\n');
	return (0);
}
