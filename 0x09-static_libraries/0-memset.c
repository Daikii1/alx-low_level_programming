#include "main.h"

/**
 * *_memset - a fucntion fills memory with a constant byte.
 * @s: pointer
 * @b: constant byte
 * @n: number of buffer spaces to be filled
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int cpt;

	for (cpt = 0; cpt < n; cpt++)
	{
		s[cpt] = b;
	}

	return (s);
}
