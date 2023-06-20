#include "main.h"

/**
 * print_alphabet - letters
 *
 * Return: void
 */
void print_alphabet(void)
{
	char LT = 'a';

	while (LT <= 'z')
	{
		_putchar(LT);
		LT++;
	}
	_putchar('\n');
}
