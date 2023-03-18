#include <stdio.h>

/**
 * main - Prints alphabets in lower cases
 *
 * Return: 0 for success
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvwxyz";
	for (int i = 0; i < 26; i++)
	{
		putchar("%c", alpha[i]);
	}
	putchar("\n");
}
