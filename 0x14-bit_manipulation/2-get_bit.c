#include "main.h"
/**
 * get_bit - returns the value of a bit at a given
 * index.
 * @n: unsigned long int input.
 * @index: index of the bit.
 *
 * Return: The value of the bit.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int cpt;

	if (n == 0 && index < 64)
		return (0);

	for (cpt = 0; cpt <= 63; n >>= 1, cpt++)
	{
		if (index == cpt)
		{
			return (n & 1);
		}
	}

	return (-1);
}
