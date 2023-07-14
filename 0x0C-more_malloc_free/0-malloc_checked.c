#include "main.h"

/**
 * malloc_checked -  a fucntion allocates memory using malloc
 * @b: bytes allocate
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	void *ptrr;

	ptrr = malloc(b);
	if (ptrr == NULL)
		exit(98);
	return (ptrr);
}
