#include <stdio.h>

/**
 * main - prints lower alphabets first then upper case alphabets
 *
 * Return s 0
 */

int main(void)
{
	char alpha = 'a';
	char Alpha = 'A';

	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (Alpha <= 'Z')
	{
		putchar(Alpha);
		Alpha++;
	}
	putchar('\n');
}
