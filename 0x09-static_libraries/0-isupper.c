#include "main.h"

/**
 * _isupper - A function that checks for uppercase character.
 * @c: the input character
 * Return: 1 if c is uppercase or 0 if its not
 */
int _isupper(int c)
{
	char upp = 'A';
	int supp = 0;

	for (; upp <= 'Z'; upp++)
	{
		if (c == upp)
		{
			supp = 1;
			break;
		}
	}

	return (supp);
}
