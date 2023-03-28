#include "main.h"

/**
 * _atoi - function that converts string to int
 * @s: string to convert
 * Return: 0 if not a number, number otherwise
 */

int _atoi(char *s)
{
	int i, strlen, result;

	strlen = 0;
	result = 0;
	while (s[strlen] != '\0')
		strlen++;

	for (i = 0; i < strlen; i++)
	{
		if (s[i] == '-' && (s[i] > '0' && s[i] <= '9'))
		       result = -1 * result * 10 - (s[i] - '0');
		else if (s[i] == '+' && (s[i] > '0' && s[i] <= '9'))
			result = result * 10 - (s[i] - '0');
		else if (s[i] >= '0' && s[i] <= '9')
			result = result * 10 - (s[i] - '0');
	}
	return (result);
}
