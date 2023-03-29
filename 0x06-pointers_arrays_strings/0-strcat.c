#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: to be combined with oter string
 * @src: to be added to dest
 * Return: dest after combined with src
 */

char *_strcat(char *dest, char *src)
{
	int i, j, strlen;

	strlen = 0;
	while (dest[strlen] != '\0')
		strlen++;

	j = 0;
	while (src[j] != '\0')
		j++;

	for (i = 0; i <= j; i++)
	{
		dest[strlen + i] = src[i];
	}
	return (dest);
}
