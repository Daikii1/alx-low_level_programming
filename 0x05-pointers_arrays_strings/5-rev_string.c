#include "main.h"

/**
 * rev_string - its a function that reverse a string.
 * @s: an input string
 * Return: Nothing
 */
void rev_string(char *s)
{
	int LN = 0, cpt = 0;
	char x;

	while (s[LN] != '\0')
		LN++;

	while (cpt < LN--)
	{
		x = s[cpt];
		s[cpt++] = s[LN];
		s[LN] = x;
	}
}
