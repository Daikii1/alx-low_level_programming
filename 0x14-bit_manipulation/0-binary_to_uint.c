#include <string.h>
#include "math.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: Binary
 * Return: the unsigned intger.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb = 0, mul = 1;
	int lenth;

	if (b == NULL)
		return (0);

	for (lenth = 0; b[lenth];)
		lenth++;

	for (lenth -= 1; lenth >= 0; lenth--)
	{
		if (b[lenth] != '0' && b[lenth] != '1')
			return (0);

		nb += (b[len] - '0') * mul;
		mul *= 2;
	}

	return (nb);
}
