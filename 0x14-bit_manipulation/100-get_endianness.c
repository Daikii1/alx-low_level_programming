#include "main.h"

/**
 * get_endianness - a function that checks the endianness
 *
 * Return: 0 for the big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int cpt;
	char *c;

	cpt = 1;
	c = (char *) &cpt;

	return ((int)*c);
}
