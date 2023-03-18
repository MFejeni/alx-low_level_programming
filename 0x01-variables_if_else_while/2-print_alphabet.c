#include <stdio.h>

/**
 * main - Prints alphabets in lower cases
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
