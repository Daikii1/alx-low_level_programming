#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: the first string.
 * @s2: the second string.
 * Return: pointr of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *stro;
	unsigned int i, j, k, cpt;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;

	stro = malloc(sizeof(char) * (i + j + 1));

	if (stro == NULL)
	{
		free(stro);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		stro[k] = s1[k];

	cpt = j;
	for (j = 0; j <= cpt; k++, j++)
		stro[k] = s2[j];

	return (stro);
}
