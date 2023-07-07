#include "main.h"

/**
 * *_memcpy - a fucntion copies n  from the memory area
 * @dest: Pointer
 * @src: Pointer
 * @n: The number of bytes to be copied from src
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int cpt;

	for (cpt = 0; cpt < n; cpt++)
	{
		dest[cpt] = src[cpt];
	}
	return (dest);
}
