#include "main.h"

/**
 * _strncpy - copies n charectors from string src to string dest
 * @dest: to return after has copied
 * @src: string to copy from
 * @n: number of chars to copy
 * Return: dest after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
