#include "main.h"

/**
 * _isdigit - returns 1 if it is a digit
 * @c: digit to check
 */

int _isdigit(int c)
{
	if (c >=48 and c <= 57)
		return (1);
	else
		return (0);
}
