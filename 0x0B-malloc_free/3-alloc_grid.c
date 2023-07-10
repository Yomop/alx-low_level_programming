#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: input value
 * @height: input value
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **k;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);
	k = malloc(sizeof(int *) * height);

	if (k == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		k[x] = malloc(sizeof(int) * width);

		if (k[x] == NULL)
		{
			for (; x >= 0; x--)
				free(k[x]);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
			k[x][y] = 0;
	}
	return (k);
}
