#include "main.h"

/**
 * _strlen_recursion - determines a length of a string
 * @s: string to determine its length
 * Return: number of string length
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s++));
}
