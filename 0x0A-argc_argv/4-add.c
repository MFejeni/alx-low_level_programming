#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - adds all positive numbers
 * @argc: number of args
 * @argv: arguments passed
 * Return: 1 for error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, addition;

	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		addition = 0;
		for (i = 1; i < argc; i++)
		{
			if (!atoi(argv[i]))
			{
				printf("Error\n");
				return (1);
			}
			else
				addition += atoi(argv[i]);
		}
		printf("%i\n", addition);
	}
	return (0);
}

/**
 * _isdigit - checkes if a char is a digit
 * @c: char to check
 * Return: 1 if true, 0 otherwise
 */

int _isdigit(char c)
{
	if (c >= 48 && c<=57)
		return (1);
	else
		return (0);
}
