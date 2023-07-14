#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings.
 * @s1: first str
 * @s2: second str
 * @n: the index
 * Return: char pointer
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *S;
	unsigned int sz1 = 0, sz2 = 0, i;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[sz1] != '\0')
	{
	sz1++;
	}

	while (s2[sz2] != '\0')
	{
	sz2++;
	}

	if (n > sz2)
	n = sz2;
	S = malloc((sz1 + n + 1) * sizeof(char));

	if (S == NULL)
	return (0);

	for (i = 0; i < sz1; i++)
	{
	S[i] = s1[i];
	}

	for (; i < (sz1 + n); i++)
	{
	S[i] = s2[i - sz1];
	}
	S[i] = '\0';

return (S);
}
