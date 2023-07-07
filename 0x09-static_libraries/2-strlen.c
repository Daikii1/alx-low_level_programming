#include "main.h"

/**
 * _strlen -  its a  function that returns the length of a string.
 * @str: the input string
 * Return: Nothing
 */
int _strlen(char *str)
{
	int cpt = 0;

	while (str[cpt] != '\0')
		cpt++;
	return (cpt);
}
