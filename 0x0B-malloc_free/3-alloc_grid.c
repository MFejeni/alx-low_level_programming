#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates grid containing 0
 * @width: width of grid
 * @height: height of grid
 * Return: NULL for failure, array of array otherwise
 */

int **alloc_grid(int width, int height)
{
	if (width <= 0 || height <= 0)
		return (NULL);
	else
	{
		int i, j, **res;

		res = malloc(sizeof(int *) * height);
		if (res == NULL)
			return (NULL);

		for (i = 0; i < height; i++)
		{
			res[i] = malloc(sizeof(int) * width);
			for (j = 0; j < width; j++)
				res[i][j] = 0;
			free(res[i]);
		}
		return (res);
		free(res);
	}
}
