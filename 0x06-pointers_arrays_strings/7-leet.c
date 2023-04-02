#include "main.h"

/**
 * leet - encodes aeotl to 43071
 * @s: string to encide
 * Return: encoded string
 */

char *leet(char *s)
{
	int strlen, i;
	char str[] = "AaEeOoTtLl";
	char encstr[] = "4433007711";

	strlen = 0;
	while (strlen != '\0')
	{
		for (i = 0; i <= 9; i++)
		{
			if (s[strlen] == str[i])
				s[strlen] = encstr[i];
		}
		strlen++;
	}
	return (s);
}
