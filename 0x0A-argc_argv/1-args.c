#include "main.h"

/**
 * main - prints number of argurment
 * @argc: argurments to be print
 * @argv: argurments to count from
 * void
 */

void main(int argc, char *argv[])
{
	if (argc > 9)
		_putchar((argc / 10) + 48);
	_putchar((argc % 10) + 48);
	_putchar('\n');
}
