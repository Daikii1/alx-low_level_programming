#include "main.h"

/**
 * _puts - prints string
 * @str: inputs string
 * Return: void
 */

void _puts(char *str)
{
	int cpt = 0;

	while (str[cpt] != '\0')
	{
		_putchar(str[cpt]);
		cpt++;
	}

	_putchar('\n');
}
