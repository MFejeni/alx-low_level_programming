#include <stdio.h>

/**
 * main - prints alphabets without e and q
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		if (alpha == 'e' || alpha == 'q')
		{
			alpha++;
		}
		else
		{
			putchar(alpha);
			alpha++;
		}
	}
	putchar('\n');
	return (0);
}
