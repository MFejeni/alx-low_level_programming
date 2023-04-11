#include "main.h"
#include <stdlib.h>

/**
 * _strdup - allocates a new memory for a copy of a parameter
 * @str: passed as string to be copied to new memory
 * Return: new pointer of a memory of copied string, NULL otherwise
 */

char *_strdup(char *str)
{
	if (str == NULL)
		return (NULL);

	char *dupstr;
	int i, strlen;

	strlen = 0;
	while (str[strlen] != '\0')
		strlen++;
	dupstr = malloc(sizeof(char) * (strlen + 1));

	if (dupstr == NULL)
		return (NULL);
	for (i = 0; i < strlen; i++)
		dupstr[i] = str[i];
	return (dupstr);
	free(dupstr);
}
