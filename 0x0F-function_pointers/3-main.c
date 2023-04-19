#include "calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that computes basics of calculator
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 98,99,100 for errors, answers otherwise
 */

int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (argv[2] != ops_t.op)
	{
		printf("Error\n");
		exit(99);
	}
	if (argv[2] == "/" && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
}
