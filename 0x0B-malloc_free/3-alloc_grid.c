#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid- creates 2D array
 *
 * @width: columns
 * @height: rows
 *
 * Return: pointer to 2D array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr;

	if (height <= 0 || width <= 0)
		return (0);
	ptr = malloc(sizeof(int *) * height);
	if (ptr == 0)
	{
		free(ptr);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == 0)
		{
			for (i = 0; i < height; i++)
				free(ptr[i]);

			free(ptr);
			return (0);
		}
	}


	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	}

	return (ptr);
}
