#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a newly-allocated space in memory
 *           containing a copy of the string given as parameter.
 * @str: The string to be copied.
 * Return: dp
 */
char *_strdup(char *str)
{
	char *dp;
	int cpt, ln = 0;

	if (str == NULL)
		return (NULL);

	for (cpt = 0; str[cpt]; cpt++)
		ln++;

	dp = malloc(sizeof(char) * (ln + 1));

	if (dp == NULL)
		return (NULL);

	for (cpt = 0; str[cpt]; cpt++)
		dp[cpt] = str[cpt];

	dp[ln] = '\0';

	return (dp);
}
