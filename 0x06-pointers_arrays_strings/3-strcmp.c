#include "main.h"

/**
 * _strcmp - return the defference of strings char
 * @s1: string 1 to compare with
 * @s2: to compare with s2
 * Return: the difference in int
 */

int _strcmp(char *s1, char *s2)
{
	int sum1 = 0, sum2 = 0, i, strlen;

	strlen = 0;
	while (s1[strlen] != '\0')
		strlen++;
	for (i = 0; i <= strlen; i++)
		sum1 += s1[i];

	strlen = 0;
	while (s2[strlen] != '\0')
		strlen++;
	for (i = 0; i <= strlen; i++)
		sum2 += s2[i];
}
