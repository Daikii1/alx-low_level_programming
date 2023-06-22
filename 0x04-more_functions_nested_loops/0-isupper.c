#include "main.h"

/**
 * _isupper - A function that verify for uppercase character.
 * @c: is the input char
 * Return: 1 if c is uppercase or 0 if its not
 */
int _isupper(int c)
{
	char UPP = 'A';
	int SUPP = 0;

	for (; UPP <= 'Z'; upp++)
	{
		if (c == UPP)
		{
			SUPP = 1;
			break;
		}
	}

	return (SUPP);
}
