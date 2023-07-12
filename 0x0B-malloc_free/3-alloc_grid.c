#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - creates a 2D array of integers using malloc
 * @width: width of the 2D array
 * @height: height of the 2D array
 *
 * Return: return a pointer of pointer or null
 */

int **alloc_grid(int width, int height)
{
	int indx, j, a, b;
	int **ptr;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		ptr = (int **) malloc(height * sizeof(int *));

		if (!ptr)
		{
			free(ptr);
			return (NULL);
		}
		for (indx = 0; indx < height; indx++)
		{
			ptr[indx] = (int *) malloc(width * sizeof(int));
			if (!ptr[indx])
			{
				for (j = 0; j <= indx; j++)
					free(ptr[j]);
				free(ptr);
				return (NULL);
			}
		}
		for (a = 0; a < height; a++)
		{
			for (b = 0; b < width; b++)
			{
				ptr[a][b] = 0;
			}
		}
		return (ptr);
	}
}
