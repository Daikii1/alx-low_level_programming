#include "main.h"
/**
 * binary_to_uint - converts a binary number to an
 * unsigned int.
 * @b: binary.
 *
 * Return: The unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int nb;
	int len, bs_t;

	if (!b)
		return (0);

	nb = 0;

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, bs_t = 1; len >= 0; len--, bs_t *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			nb += bs_t;
		}
	}

	return (nb);
}
