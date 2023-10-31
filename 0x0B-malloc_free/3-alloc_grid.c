#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: NULL.
 */
int **alloc_grid(int width, int height)
{
	int **TwoDim;
	int heightIndex, widthIndex;

	if (width <= 0 || height <= 0)
		return (NULL);

	TwoDim = malloc(sizeof(int *) * height);

	if (TwoDim == NULL)
		return (NULL);

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		TwoDim[heightIndex] = malloc(sizeof(int) * width);

		if (TwoDim[heightIndex] == NULL)
		{
			for (; heightIndex >= 0; heightIndex--)
				free(TwoDim[heightIndex]);

			free(TwoDim);
			return (NULL);
		}
	}

	for (heightIndex = 0; heightIndex < height; heightIndex++)
	{
		for (widthIndex = 0; widthIndex < width; widthIndex++)
			TwoDim[heightIndex][widthIndex] = 0;
	}

	return (TwoDim);
}
