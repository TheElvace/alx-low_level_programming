#include <stdlib.h>
#include "main.h"

/**
 * **alloc_grid - this creates two-dimensional array of ints
 * @width: the width of the matrix
 * @height: the height of the matrix
 * Return: pointer to the created matrix for success
 * or NULL for Error
 */
int **alloc_grid(int width, int height)
{
	int **arr;
	int c, d;

	if (height <= 0 || width <= 0)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
		return (NULL);

	for (c = 0; c < height; c++)
	{
		arr[c] = (int *) malloc(sizeof(int) * width);
		if (arr[c] == NULL)
		{
			free(arr);
			for (d = 0; d <= c; d++)
				free(arr[d]);
			return (NULL);
		}
	}

	for (c = 0; c < height; c++)
	{
		for (d = 0; d < width; d++)
		{
			arr[c][d] = 0;
		}
	}
	return (arr);
}
