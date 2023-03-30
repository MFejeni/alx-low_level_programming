#include "main.h"

/**
 * _strncpy - copies n chars from src to dest
 * @dest: to be the result
 * @src: to be copied from
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (;i < n; i++)
		dest = '\0';

	return (dest);
}
