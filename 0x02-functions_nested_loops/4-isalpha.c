#include "main.h"

/**
 * _isalpha - checkes if the letter is an alphabet or not
 * @c: integer representing alphabet or other charector
 * Return: 1 if true 0 otherwise
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
