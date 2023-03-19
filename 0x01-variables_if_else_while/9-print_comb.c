#include <stdio.h>

/**
 * main - prints numbers separated with a comma
 *
 * Return: 0 for success
 */

int main(void)
{
	int num = 0;

	while (num < 9)
	{
		putchar(num);
		putchar(', ');
	}
	putchar('9\n');
	return (0);
}
