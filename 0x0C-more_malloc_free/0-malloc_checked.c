#include "main.h"

/**
 * malloc_checked -  a fucntion allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *PT;

	PT = malloc(b);
	if (PT == NULL)
		exit(98);
	return (PT);
}
