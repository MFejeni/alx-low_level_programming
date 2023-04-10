#include "main.h"

/**
 * main - prints out programs name
 * @argc: count of programes
 * @argv: list of programes
 * Return: 0 for sucess
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		_putchar(argv[i]);
	return (0);
}
