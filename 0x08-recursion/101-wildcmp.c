#include "main.h"

/**
 * wildcmp - compares two strings if are equal or not
 * @s1: string 1
 * @s2: string 2 to be compared with s1
 * Return: 1 if they are equal, 0 otherwise
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 != *s2)
		return (0);
	else if (*s1 == *s2)
		return (1);
	else
		return (wildcmp(s1 + 1, s2 + 1));
}

