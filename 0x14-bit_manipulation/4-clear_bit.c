#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index.
 * @n: adresse of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it done, -1 if it not.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cpt;

	if (index > 63)
		return (-1);

	cpt = 1 << index;

	if (*n & cpt)
		*n ^= cpt;

	return (1);
}
