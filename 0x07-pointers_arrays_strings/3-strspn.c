#include "main.h"

/**
 * _strspn - a fucntion that gets the length of a prefix substring
 * @s: string that will be scanned
 * @accept: string containing characters to match
 * Return: Number of matching characters
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, cpt;

	int cn = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		cpt = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				cn++;
				cpt = 1;
			}
		}
		if (cpt == 0)
			return (cn);
	}

	return (0);
}
