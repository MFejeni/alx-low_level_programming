#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - program that computes basics of calculator
 * @argc: number of arguments passed
 * @argv: arguments passed
 * Return: 98,99,100 for errors, 0 otherwise
 */

int main(int argc, char *argv[])
{
	char opr;

	opr = argv[2][0];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	
	if (opr != '+' || opr == '-' || opr == '*' || opr == '/' || opr == '%')
	{
		printf("Error op\n");
		exit(99);
	}
		
	
	if ((strcmp(argv[2], "/") == 1 || strcmp(argv[2], "%") == 1) && atoi(argv[3]) == 0)
	{
		printf("Error divide by 0\n");
		exit(100);
	}
	printf("%d\n", get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
