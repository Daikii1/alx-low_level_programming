#include "main.h"
#include <stdlib.h>
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
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

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	b = malloc(nmemb * size);

	if (b == NULL)
		return (NULL);
	_memset(b, 0, (nmemb * size));
	return (b);
}
