#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: string of 0 and 1 chars representing binary number
 * Return: the converted number if pass, 0 otherwise
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num;
	int i;

	num = 0;
	i = 0;
	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		num <<= 1;
		if (b[i] & 1)
			num += 1;
		i += 1;
	}
	return (num);
}
