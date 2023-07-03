#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to match
 * Return: (0)
 */
char *_strpbrk(char *s, char *accept)
{
	int cpt, j;

	for (cpt = 0; s[cpt] != '\0'; cpt++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[cpt] == accept[j])
			{
				return (s + cpt);
			}
		}
	}

	return (0);
}
