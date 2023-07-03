#include "main.h"

/**
 * *_strchr - a fucntion that locates a character in a string.
 * @s: its is the C string to be scanned
 * @c: its the character to be searched in s
 * Return: (0)
 */
char *_strchr(char *s, char c)
{
	int cpt;

	for (cpt = 0; s[cpt] != '\0'; cpt++)
	{
		if (s[cpt] == c)
			return (s + cpt);
	}
	if (s[cpt] == c)
		return (s + cpt);

	return (0);
}
