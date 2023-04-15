#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - concatentates two strings
* @s1: first string
* @s2: second string
* @n: int to concatenate from s2
* Return: a pointer to concatenated string
**/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int s1len, i;
	unsigned int j;
	char *strptr;

	s1len = 0;
	i = 0;
	j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1len])
		s1len++;
	strptr = malloc(s1len + n + 1);
	if (strptr == NULL)
		return (NULL);
	while (s1[i])
	{
		strptr[i] = s1[i];
		i++;
	}

	while (j < n)
	{
		strptr[i + j] = s2[j];
		j++;
	}
	strptr[i + j] = '\0';
	return (strptr);
}
