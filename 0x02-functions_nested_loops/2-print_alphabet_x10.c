#include "main.h"

/**
 * print_alphabet_x10 - print alphabet 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int LF = 0;
	char LT = 'a';

	while (LF < 10)
	{
		LT = 'a';
		while (LT <= 'z')
		{
			_putchar(LT);
			lT++;
		}
		_putchar('\n');

		LF++;
	}
}
