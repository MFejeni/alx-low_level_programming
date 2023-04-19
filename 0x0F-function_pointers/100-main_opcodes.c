#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints own opcode in hexadecimal
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int num_byts, i;
	char *str;

	if (argc < 2)
	{
		printf("Error\n");
		exit(1);
	}
	num_byts = atoi(argv[1]);
	if (num_byts < 0)
	{
		printf("Error\n");
		exit(2);
	}
	str = (char *)main;
	for (i = 0; i < num_byts; i++)
		printf("%02hhx ", str[i]);

	return (0);
}
