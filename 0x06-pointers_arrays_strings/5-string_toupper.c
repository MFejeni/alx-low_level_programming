#include "main.h"

/**
 * string_toupper - chages lower case string to upper case
 * @s: string to convert
 * Return: upper case string
 */

char *string_toupper(char *s)
{
	int i, strlen;

	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	for (i = 0; i <= strlen; i++)
	{
		if (_islower(s[i]) == 1)
			s[i] = change_toupper(s[i]);
	}
	return (s);
}

/**
 * _islower - returns true if letter is lower case
 * @c: letter to check
 * Return: True if is lower, fasle otherwise
 */

int _islower(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

/**
 * change_toupper - changes lower case to upper
 * @c: char to change
 * Return: upper char
 */

char change_toupper(char c)
{
	char lcase[] = "abcdefghijklmnopqrstuvxyz";
	char ucase[] = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (lcase[i] == c)
			c = ucase[i];
	}
	return (c);
}
