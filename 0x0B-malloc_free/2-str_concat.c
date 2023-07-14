#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The string to be concatenated upon.
 * @s2: The string to be concatenated to s1.
 *
 * Return: cap_str
 */
char *str_concat(char *s1, char *s2)
{
	char *cap_str;
	int cpt, cap_cpt = 0, len = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (cpt = 0; s1[cpt] || s2[cpt]; cpt++)
		len++;

	cap_str = malloc(sizeof(char) * len);

	if (cap_str == NULL)
		return (NULL);

	for (cpt = 0; s1[cpt]; cpt++)
		cap_str[cap_cpt++] = s1[cpt];

	for (cpt = 0; s2[cpt]; cpt++)
		cap_str[cap_cpt++] = s2[cpt];

	return (cap_str);
}
