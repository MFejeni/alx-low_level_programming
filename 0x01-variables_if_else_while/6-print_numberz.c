#include <stdio.h>

/**
 * main - prints positive numbers less than 10 using putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	char num = '0';

	while (num < 10)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
