#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars and
 *                initializes it with a specific char.
 * @size: The size of the array that will  initialized
 * @c: The specific char
 *
 * Return: If size == 0 or the function will false - NULL.
 *         else - a pointer to  array.
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int cpt;

	if (size == 0)
		return (NULL);

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);

	for (cpt = 0; cpt < size; cpt++)
		array[cpt] = c;

	return (array);
}
