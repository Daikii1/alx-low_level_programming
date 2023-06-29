#include "main.h"
/**
 * _strcmp -afucntion that compares two strings
 * @s1: s1 string.
 * @s2: s2 string.
 * Return: cpt
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, cpt = 0;

	while (cpt == 0)
	{
		if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
			break;
		cpt = *(s1 + i) - *(s2 + i);
		i++;
	}

	return (cpt);
}
