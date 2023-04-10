#include "main.h"

/**
 * main - programme that prints multiplication
 * @argc: number of arguments of programmes
 * @argv: arguments of programes
 * Return: 0 for sucees , 1 for error
 */

int main(int argc, char *argv[])
{
	char err[] = "Error";
	int i, mul;

	if (argc != 2)
	{
		for (i = 0; i < 5; i++)
			_putchar(arr[i]);
		_putchar('\n');
		return (1);
	}
	else
	{
		mul = argv[1] * argv[2];
		if (mul > 9 || mul < -9)
			_putchar((mul / 10) + 48);
		_putchar((mul % 10) + 48);
		_putchar('\n');
		return (0);
	}
}
