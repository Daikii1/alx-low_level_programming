#include "main.h"
/**
 * string_toupper - a fucntion thet changes all lowercase letters of a string
 * to uppercase
 * @s: the input string.
 * Return: s
 */

char *string_toupper(char *s)
{
	int cpt = 0;

	while (*(s + cpt) != '\0')
	{
		if ((*(s + cpt) >= 97) && (*(s + cpt) <= 122))
			*(s + cpt) = *(s + cpt) - 32;
		cpt++;
	}

	return (s);
}
