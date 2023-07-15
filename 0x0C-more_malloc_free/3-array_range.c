#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int *ttr, i = 0, j = min;

	if (min > max)
		return (0);
	ttr = malloc((max - min + 1) * sizeof(int));

	if (!ttr)
		return (0);
	while (i <= max - min)
		ttr[i++] = j++;
	return (ttr);
}
