#include "function_pointers.h"

/**
 * int_index - a fucntion to searches for an integer
 * @array: array to search
 * @size: array size
 * @cmp: pointer to the comparing func
 * Return: index of the first elemt for which
 * the cmp function that is not return 0, or -1
 * if no match is found
 * or size is loweer than zero
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int cpt;

	if (array && cmp)
	{
		for (cpt = 0; cpt < size; cpt++)
		{
			if (cmp(array[cpt]) != 0)
				return (cpt);
		}
	}

	return (-1);
}
