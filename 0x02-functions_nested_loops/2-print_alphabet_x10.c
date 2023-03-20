#include "main.h"

/**
 * print_alphabet_x10 - prints alphabets 10 times using putchar
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	for (int i = 0; i < 10; i++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			putchar(alpha++);
		}
		putchar('\n');
	}
}
