#include <stdio.h>

/**
 * main - prints numbers separated with a comma
 *
 * Return: 0 for success
 */

int main(void)
{
	int num = 48;

	while (num < 58)
	{
		putchar(num++);
		if (num != 58)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
