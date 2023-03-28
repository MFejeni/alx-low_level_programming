#include "main.h"

/**
 * rev_string - reverses a string putted as parameter
 * @s: string to reverse
 * void
 */

void rev_string(char *s)
{
	char *str;
	int i;

	for (i = _strlen(s); i >= 0; i--)
	{
		str = str + s[i];
	}
}
