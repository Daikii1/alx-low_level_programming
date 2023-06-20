#include "main.h"

/**
 * print_alphabet_x10 - function that print alphabet from a to z 10 times
 * Return: Return: Always 0
*/

void print_alphabet_x10(void)
{
	int cpt, LC;

	for (cpt = 0; cpt < 10; cpt++)
	{
		for (LC = 'a'; LC <= 'z'; LC++)
			_putchar(LC);
		_putchar('\n');
	}
}
