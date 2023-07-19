#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - its a function given as a
 * parameter on each element of the array
 * @array: array
 * @size: array size
 * @action:the  pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int cpt;

	if (!array || !action)
		return;

	for (cpt = 0; cpt < size; cpt++)
		action(array[cpt]);
}
