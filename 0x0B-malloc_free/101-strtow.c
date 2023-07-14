#include "main.h"
#include <stdlib.h>

/**
 * ch_free_grid - frees a 2 dimensional array.
 * @grid: multidimensional array of char.
 * @height: height of the array.
 *
 * Return: None
 */
void ch_free_grid(char **grid, unsigned int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
			free(grid[height]);
		free(grid[height]);
		free(grid);
	}
}

/**
 * strtow - splits a string into words.
 * @str: string.
 *
 * Return: pointer of integers arry
 */
char **strtow(char *str)
{
	char **outy;
	unsigned int c, ht, i, j, cpt;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = ht = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			ht++;
	outy = malloc((ht + 1) * sizeof(char *));
	if (outy == NULL || ht == 0)
	{
		free(outy);
		return (NULL);
	}
	for (i = cpt = 0; i < ht; i++)
	{
		for (c = cpt; str[c] != '\0'; c++)
		{
			if (str[c] == ' ')
				cpt++;
			if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			{
				outy[i] = malloc((c - cpt + 2) * sizeof(char));
				if (outy[i] == NULL)
				{
					ch_free_grid(outy, i);
					return (NULL);
				}
				break;
			}
		}
		for (j = 0; cpt <= c; cpt++, j++)
			outy[i][j] = str[a1];
		outy[i][j] = '\0';
	}
	outy[i] = NULL;
	return (outy);
}
