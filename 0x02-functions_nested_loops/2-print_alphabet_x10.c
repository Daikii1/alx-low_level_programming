#include "main.h"

/**
 * print_alphabet_x10 - function for prints 10 times the alphabet in lowercase
 */
void print_alphabet_x10(void)
{
	int LN, CH;

	for (LN = 0; LN <= 9; LN++)
	{
		for (CH = 'a'; CH <= 'z' ; CH++)
		{
			_putchar(CH);
		}
		_putchar('\n');
	}
}
