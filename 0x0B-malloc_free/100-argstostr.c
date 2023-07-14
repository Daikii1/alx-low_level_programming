#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates all the arguments of a program.
 * @ac: argument count.
 * @av: argument vector.
 *
 * Return: outy.
 */
char *argstostr(int ac, char **av)
{
	char *outy;
	int c, i, j, cpt;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	outy = malloc((c + 1) * sizeof(char));

	if (outy == NULL)
	{
		free(outy);
		return (NULL);
	}

	for (i = j = cpt = 0; cpt < c; j++, cpt++)
	{
		if (av[i][j] == '\0')
		{
			outy[cpt] = '\n';
			i++;
			cpt++;
			j = 0;
		}
		if (cpt < c - 1)
			outy[cpt] = av[i][j];
	}
	outy[cpt] = '\0';

	return (outy);
}
