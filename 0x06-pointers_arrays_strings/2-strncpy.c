#include "main.h"

/**
 * _strncpy - its a fucntion that Copies at most an inputted number of bytes
 * from string src into dest.
 * @dest: The buffer
 * @src: The source
 * @n: its the  maximum number of bytes to be copied from src.
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int cpt = 0;

	while (src[cpt] != '\0' && cpt < n)
	{
		dest[cpt] = src[cpt];
		cpt++;
	}

	while (cpt < n)
	{
		dest[cpt] = '\0';
		cpt++;
	}

	return (dest);
}
