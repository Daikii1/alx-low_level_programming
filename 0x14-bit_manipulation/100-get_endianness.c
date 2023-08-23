#include <stdio.h>
#include "main.h"

/**
 * get_endianness - a fucntion that checks for the endianness
 * Return: 1 for the small endian || 0 for the big endian.
 */
int get_endianness(void)
{

	int Nb = 0x01;
	char *CS = (char *)&n;

	return (CS[0]);
}
