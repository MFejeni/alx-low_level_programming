#include "main.h"

/**
 * rev_string - reverses a string putted as parameter
 * @s: string to reverse
 * void
 */

void rev_string(char *s)
{
	char a, b;
	int i, strlen;

	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	strlen--;
	for (i = 0; i < strlen; i++)
	{
		a = s[i];
		b = s[strlen];
		s[i] = b;
		s[strlen--] = a;
	}
}
