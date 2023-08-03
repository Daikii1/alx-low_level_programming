#include "main.h"
/**
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: adresse of an unsigned long int.
 * @index: index of the bit.
 * Return: 1 if it done, -1 if not.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int cpt;

	if (index > 63)
		return (-1);

	cpt = 1 << index;
	*n = (*n | cpt);

	return (1);
}
