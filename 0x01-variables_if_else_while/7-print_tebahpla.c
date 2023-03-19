#include <stdio.h>

/**
 * main - prints alphabets in reverse
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha = 'z';

	while (alpha >= 'a')
	{
		putchar(alpha--);
	}
	putchar('\n');
	return (0);
}
