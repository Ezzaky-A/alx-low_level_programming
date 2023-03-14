#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid-function that returns a pointer to a 2
 * @width: checker
 * @height: checker
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j, s1, s2;
	int **po;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	else
	{
		po = (int **) malloc(height * sizeof(int *));
		if (!po)
		{
			free(po);
			return (NULL);
		}
		for (i = 0; i < height; i++)
		{
			po[i] = (int *) malloc(width * sizeof(int *));
			if (!po[i])
			{
				for (j = 0; j <= i; j++)
				{
					free(po[j]);
				}
				free(po);
				return (NULL);
			}
		}
		for (s1 = 0; s1 < height; s1++)
		{
			for (s2 = 0; s2 < width; s2++)
			{
				po[s1][s2] = 0;
			}
		}
		return (po);
	}

}
