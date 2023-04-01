#include "main.h"

/**
 * is_sep - checks if the char is a separator
 * @c: char to check
 * Return: 1 if true, 0 otherwise
 */

int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '.' || c == '!' ||
		c == '?' || c == '"' || c == '(' || c == ')' || c == '{' ||
		c == '}' || c == ';' || c == ',')
		return (1);
	else
		return (0);
}

/**
 * cap_string - Capitalises the first letter of a string
 * @s: string to do the capitalisation
 * Return: capitalised string
 */

char *cap_string(char *s)
{
	int strlen;

	strlen = 0;
	while (s[strlen] != '\0')
	{
		if (strlen == 0)
			s[strlen] = change_toupper(s[strlen]);
		else if (is_sep(s[strlen]) == 1 && s[strlen + 1] != '\0')
			s[strlen + 1] = change_toupper(s[strlen + 1]);
		strlen++;
	}
	return (s);
}

/**
 * change_toupper - capital
 * @c: char
 * Return: capital
 */

char change_toupper(char c)
{
	if(c >= 97 && c <= 122)
		c = c - 32;
	return (c);
}
