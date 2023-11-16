#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
int **alloc_grid(int width, int height)
{
	int i = 0, j = 0, **matrix;

	if (width <= 0 || height <= 0)
	   return (NULL);

	matrix = malloc(sizeof(int *) * height);

	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}

	for (; i < height; i++)
	{
		matrix[i] = calloc(width, sizeof(int));
		if (matrix[i] == NULL)
		{
			while (i >= 0)
			{
				free(matrix[i]);
				i--;
			}
			free(matrix);
			return (NULL);
		}
	}
	return (matrix);
}
