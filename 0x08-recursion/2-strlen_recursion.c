#include "main.h"

/**
 * _strlen_recursion - determines a length of a string
 * @s: string to determine its length
 * Return: number of string length
 */

int _strlen_recursion(char *s)
{
	int strlen =0;

	if (s[strlen] == '\0')
		return (strlen);
	else
		_strlen_recursion(s - s[strlen++]);
}
