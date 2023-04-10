#include "main.h"
#include <stdio.h>

/**
 * main - prints out programs name
 * @argc: count of programes
 * @argv: list of programes
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
