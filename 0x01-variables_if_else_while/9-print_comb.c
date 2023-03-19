#include <stdio.h>

/**
 * main - prints numbers separated with a comma
 *
 * Return: 0 for success
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num);
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
