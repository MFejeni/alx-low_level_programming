#include <stdio.h>

/**
 * main - prints lower alphabets first then upper case alphabets
 *
 * Return s 0
 */

int main(void)
{
	char alpha[26] = "abcdefghijklmnopqrstuvxyz";
	char Alpha[26] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";

	for (int i = 0; i < 26; i++)
	{
		putchar("%c", alpha[i]);
	}
	for (int i = 0; i < 26; i++)
	{
		putchar("%c", Alpha[i]);
	}
	putchar("\n");
}
