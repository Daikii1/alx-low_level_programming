#include "main.h"

/**
 * puts2 - its a fucntion that print alternating chars of string
 * @str: the input string
 * Return: void
 */

void puts2(char *str)
{
	int cpt;

	cpt = 0;
	while (str[cpt] != '\0')
	{
		if (cpt % 2 == 0)
			_putchar(str[cpt]);
		cpt++;
	}
	_putchar('\n');
}
