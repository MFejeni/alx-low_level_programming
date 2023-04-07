#include "main.h"

/**
 * _abs - changes a negative value to positive
 * @n: number to be changed
 * Return: a positive number
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}
