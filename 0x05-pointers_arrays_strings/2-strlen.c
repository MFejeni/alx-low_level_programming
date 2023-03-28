#include "main.h"

/**
 * _strlen - returns length of a string (*str)
 * @s: string to be determined its length
 * Return: the length of a string s
 */

int _strlen(char *s)
{
	int i;

	for (i = s[0]; i != '\0'; i++)
		continue;
	return (i);
}
