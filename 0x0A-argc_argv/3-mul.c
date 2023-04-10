#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - programme that prints multiplication
 * @argc: number of arguments of programmes
 * @argv: arguments of programes
 * Return: 0 for sucees , 1 for error
 */

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
}
