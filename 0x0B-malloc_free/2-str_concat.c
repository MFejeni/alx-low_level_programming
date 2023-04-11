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
	int s1len, s2len, i, j;
	char *result;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1len = 0;
	while (s1[s1len] != '\0')
		s1len++;
	s2len = 0;
	while (s2[s2len] != '\0')
		s2len++;

	result = malloc(sizeof(char) * (s1len + 1) + sizeof(char) * (s2len + 1));
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		result[i] = s1[i];

	for (j = 0; s2[j] != '\0'; j++)
		result[i++] = s2[j];
	return (result);
	free(result);

}
