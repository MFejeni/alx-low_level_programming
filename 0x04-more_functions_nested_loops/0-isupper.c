#include "main.h"

/**
 * _isupper - returns 1 if a letter is upper case
 * @c: letter to check
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
