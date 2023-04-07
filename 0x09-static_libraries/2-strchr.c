#include "main.h"
/**
* _strchr - a function that locates a character in a string
* @s: string
* @c: char in s
* Return: the first occurrence or NULL
**/
char *_strchr(char *s, char c)
{
	int i;
	char *cs;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			cs = (s + i);
	}
	if (s[i] == c)
		return (cs);
	else
		return ('\0');
}
