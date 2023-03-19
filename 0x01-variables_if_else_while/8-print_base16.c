#include <stdio.h>

/**
 * main - prints all base 16 numbers and letters
 *
 * Return: 0 for success
 */

int main(void)
{
	char num = '0';
	char alpha = 'a';

	while (num <= '9')
	{
		putchar(num++);
	}
	while (alpha <= 'f')
	{
		putchar(alpha++);
	}
	putchar('\n');
	return (0);
}
