#include "main.h"

/**
 * get_endianness - determines if endianness is litte or big
 * Return: 0 if endianness is big, 1 otherwise
 */
int get_endianness(void)
{
	int num = 2;

	return ((num & 1) ? 0 : 1);
}
