#include <stdio.h>

/**
 * main - prints lower alphabets first then upper case alphabets
 *
 * Return:  0 for success
 */

int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha++);
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha++);
	}
	putchar('\n');
	return (0);
}
