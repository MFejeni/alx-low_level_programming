#include "main.h"

/**
 * is_sep - checks if the char is a separator
 * @c: char to check
 * Return: 1 if true, 0 otherwise
 */

int is_sep(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	else if (c == '.' || c == '!' || c == '?' || c == '"')
		return (1);
	else if (c == '(' || c == ')' || c == '{' || c == '}')
		return (1);
	else if (c == ';' || c == ',')
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
	int strlen, i;

	strlen = 0;
	while (s[strlen] != '\0')
		strlen++;
	for (i = 0; i < strlen; i++)
	{
		if (i == 0)
			s[i] = change_toupper(s[i]);
		else if (is_sep(s[i]) == 1)
			s[i + 1] = change_toupper(s[i]);
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
	char *lcase = "abcdefghijklmnopqrstuvxyz";
	char *ucase = "ABCDEFGHIJKLMNOPQRSTUVXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == lcase[i])
			c = ucase[i];
	}
	return (c);
}
