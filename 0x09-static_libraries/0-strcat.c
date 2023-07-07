#include "main.h"
/**
 * _strcat - a function concatenates two strings.
 * @dest: its the destination
 * @src: its the source
 * Return: the pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int cpt = 0, cpt2 = 0;

	while (*(dest + cpt) != '\0')
	{
		cpt++;
	}

	while (cpt2 >= 0)
	{
		*(dest + cpt) = *(src + cpt2);
		if (*(src + cpt2) == '\0')
			break;
		cpt++;
		cpt2++;
	}
	return (dest);
}
