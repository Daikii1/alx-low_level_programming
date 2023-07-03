#include "main.h"

/**
 * _strstr - a fucntion locates a substring
 * @haystack: strin
 * @needle: substring
 * Return: pointer to beginning of needle in haystack or NULL if no match
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int cpt = 0, count = 0;

	while (haystack[cpt])
	{
		while (needle[count] && (haystack[cpt] == needle[0]))
		{
			if (haystack[cpt + count] == needle[count])
				count++;
			else
				break;
		}
		if (needle[count])
		{
			cpt++;
			count = 0;
		}
		else
			return (haystack + cpt);
	}
	return (0);
}
