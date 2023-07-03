#include "main.h"

/**
 * _strstr - fucntion that finds the first occurrence of the substring.
 * @haystack: string.
 * @needle: substring.
 * Return: pointer to the beginning
*/
char *_strstr(char *haystack, char *needle)
{
	char *BBhaystack;
	char *pnd;

	while (*haystack != '\0')
	{
		BBaystack = haystack;
		pnd = needle;

		while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pnd)
		{
			haystack++;
			pnd;
		}
		if (!*pnd)
			return (bhaystack);
		haystack = BBhaystack + 1;
	}
	return (0);
}
