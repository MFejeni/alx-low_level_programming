#include "main.h"

/**
 * _islower - checks if the charector is a lower case or not
 *
 * Return: 1 if true 0 otherwise
 * @c: integer representing an alphabet
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
