#include "main.h"

/**
 * _strlen_recursion - a fucntion that  Returns the length of a string.
 * @s: The string to be measured
 * Return: String lenght
 */
int _strlen_recursion(char *s)
{
	int cpt = 0;

	if (*s)
	{
		cpt++;
		cpt += _strlen_recursion(s + 1);
	}

	return (cpt);
}
