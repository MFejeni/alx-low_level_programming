#include "main.h"
#include <stdio.h>

/**
 * main - programmes that prints all arguments
 * @argc: number of arguments
 * @argv: arguments passed
 * void
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
