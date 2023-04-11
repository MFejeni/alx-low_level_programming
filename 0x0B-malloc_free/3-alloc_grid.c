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

		res = malloc(sizeof(int)* (width + heigght));
		for (i = 0; i < width; i++)
		{
			for (j = 0; j < height; j++)
				res[i][j] = 0;
		}
		return (res);
		free(res);
	}
}
