#include "main.h"

/**
 * rev_string - reverses a string putted as parameter
 * @s: string to reverse
 * void
 */

void rev_string(char *s)
{
	char str;
	int i, sL, strlen;

	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	sL = strlen - 1;
	for (i = strlen; i >= 0; i--)
	{
		str = s[i];
		s[i] = s[sL];
		s[sL--] = str;
	}
}
