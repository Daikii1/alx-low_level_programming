#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory using malloc.
 * @b: The number of bytes to be allocated.
 *
 * Return: pointer to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	void *mek = malloc(b);

	if (mek == NULL)
		exit(98);

	return (mek);
}
