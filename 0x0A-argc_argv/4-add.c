#include "main.h"

/**
 * main - adds all positive numbers
 * @argc: number of args
 * @argv: arguments passed
 * Return: 1 for error, 0 otherwise
 */

int main(int argc, char *argv[])
{
	int i, addition, j;
	char err[] = "Error";

	if (argc == 1)
	{
		_putchar(48);
		_putchar('\n');
	}
	else
	{
		addition = 0;
		for (i = 1; i < argc; i++)
		{
			for (j = 0; j < argv[i]; j++)
			{
				if (_isdigit(argv[i][j]) == 1)
					addition += arg[i];
				else
				{
					_putchar('E');
					_putchar('r');
					_putchar('r');
					_putchar('o');
					_putchar('r');
					_putchar('\n');
					return (1);
				}
			}
		}
		if (addition > 999)
			_putchar((addition / 1000) + 48);
		if (addition > 99)
			_putchar((addition / 100) + 48);
		if (addition > 9)
			_putchar((addition / 10) + 48);
		_putchar((addition % 10) + 48);
		_putchar('\n');
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
