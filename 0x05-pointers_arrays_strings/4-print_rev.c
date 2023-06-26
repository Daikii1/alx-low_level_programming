#include "main.h"

/**
 * print_rev - a fucntion prints string backwards
 * @s: input tring
 * Return: void
 */

void print_rev(char *s)
{
	int cpt = 0;

	while (s[cpt] != '\0')
	{
		cpt++;
	}
	cpt--;
	while (cpt >= 0)
	{
		_putchar(s[cpt]);
		cpt--;
	}
	_putchar('\n');
}
