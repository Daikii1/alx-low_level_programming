#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: the width of the array.
 * @height: the height of the array.
 *
 * Return: pointer of an array of int
 */
int **alloc_grid(int width, int height)
{
	int **grido;
	int cpt, j;

	if (width < 1 || height < 1)
		return (NULL);

	grido = malloc(height * sizeof(int *));
	if (grido == NULL)
	{
		free(grido);
		return (NULL);
	}

	for (cpt = 0; cpt < height; cpt++)
	{
		grido[cpt] = malloc(width * sizeof(int));
		if (grido[cpt] == NULL)
		{
			for (cpt--; cpt >= 0; cpt--)
				free(grido[cpt]);
			free(grido);
			return (NULL);
		}
	}

	for (cpt = 0; cpt < height; cpt++)
		for (j = 0; j < width; j++)
			grido[cpt][j] = 0;

	return (grido);
}
