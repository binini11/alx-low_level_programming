#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates 2 dimensional array
 * @width: input
 * @height: input
 * Return: ponter
**/

int **alloc_grid(int width, int height)
{
	int i, j;
	char **b;

	if (width < 1 || height < 1)
		return (NULL);

	b = malloc(height * sizeof(int *));

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		b[i] = malloc(width * sizeof(int));
		if (b[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(b[i]);
			free(b);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			b[i][j] = 0;
	return (b);
}
