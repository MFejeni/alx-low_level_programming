#include "main.h"

/**
 * _strcmp - return the defference of strings char
 * @s1: string 1 to compare with
 * @s2: to compare with s2
 * Return: the difference in int
 */

int _strcmp(char *s1, char *s2)
{
	int strlen;

	strlen = 0;
	while (s1[strlen] == s2[strlen] && s1[strlen] != '\0')
		strlen++;
	return (s1[strlen] - s2[strlen]);
}
