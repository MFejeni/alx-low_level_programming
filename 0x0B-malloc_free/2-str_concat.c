#include "main.h"
#include <stdlib.h>

/**
 * str_concat - returns a pointer to a new memory containing s1 & s2
 * @s1: to concatenate with s2
 * @s2: to be added to s1
 * Return: NULL on failure, return string otherwise
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i, j;

	result = malloc(sizeof(s1) + sizeof(s2));
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];
	for (j = 0;s2[j] != '\0'; j++)
		result[i++] = s2[j];
	return (result);
	free(result);
}
