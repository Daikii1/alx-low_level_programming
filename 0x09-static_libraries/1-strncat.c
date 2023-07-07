#include "main.h"

/**
 * _strncat - Concatenates two strings using at mo
 * @dest: The pointer
 * @src: The pointer
 * @n: most number of bytes from src to be appended to dest.
 * Return: dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int k, m;

	k = 0;
	m = 0;

	while (dest[k] != '\0')
		k++;

	while (src[m] != '\0' && m < n)
	{
		dest[k] = src[m];
		k++;
		m++;
	}

	dest[k] = '\0';

	return (dest);
}
