#include "main.h"

/**
 * _strncat - concatenates n charecters to destination
 * @dest: charectors to return after concatenation
 * @src: charectors to choose from
 * @n: numbers of charectors
 * Return: dest with concateneted charectors
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, destlen = 0;

	while (dest[destlen] != '\0')
		destlen++;

	for (i = 1; i <= n; i++)
	{
		dest[destlen + i] = src[i -1];
	}
}
