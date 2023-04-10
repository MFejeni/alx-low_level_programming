#include "main.h"

/**
 * main - programmes that prints all arguments
 * @argc: number of arguments
 * @argv: arguments passed
 * void
 */

void main(int argc, char *argv[])
{
	int i, j, arglen;

	for (i = 0; i < argc; i++)
	{
		arglen = 0;
		while (argv[argc][arglen] != '\0')
			arglen++;
		for (j = 0; j < arglen; j++)
			_putchar(argv[argc][j]);
		_putchar('\n');
	}
}
