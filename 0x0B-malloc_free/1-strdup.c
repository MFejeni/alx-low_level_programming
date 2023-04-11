#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates a new memory for a copy of a parameter
 * @str: passed as string to be copied to new memory
 * Return: new pointer of a memory of copied string, NULL otherwise
 */

char *_strdup(char *str)
{
	char *dupstr;

	dupstr = malloc(sizeof(*str));
	dupstr = str;
	if (dupstr == NULL)
		return (NULL);
	else
		return (*dupstr);
	free(dupstr);
}
