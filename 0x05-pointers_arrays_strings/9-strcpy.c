#include "main.h"

/**
 * _strcpy - copies src string to dest
 * @dest: to return after copied
 * @src: to copy from
 * Return: char from dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, strlen;

	strlen = 0;
	while (src[strlen] != '\0')
		strlen++;

	for (i = 0; i < strlen; i++)
	{
		dest[i] = src[i];
	}
	dest[strlen] = '\0';
	return (dest);
}
