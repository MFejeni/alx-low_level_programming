#include "main.h"

/**
 * print_alphabet - prints alphabets (called by main)
 *
 * Return void
 */

void print_alphabet(void)
{
	char alpha = 'a';

	while (alpha <= 'z')
	{
		putchar(alpha++);
	}
	putchar('\n');
}
