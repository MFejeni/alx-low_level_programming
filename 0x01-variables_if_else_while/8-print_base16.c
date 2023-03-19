#include <stdio.h>

/**
 * main - prints all base 16 numbers and letters
 *
 * Return: 0 for success
 */

int main(void)
{
	char num = '0';

	while (num <= 'f')
	{
		putchar(num++);
	}
	putchar('\n');
	return (0);
}
