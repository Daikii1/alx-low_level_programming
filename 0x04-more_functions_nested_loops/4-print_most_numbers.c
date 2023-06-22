#include "main.h"

/**
 * print_most_numbers - a function that prints the numbers from 0 to 9.
 * Return: Always 0
 */
void print_most_numbers(void)
{
	int cpt = '0';

	for (; cpt <= '9'; i++)
	{
		if (cpt != '2' && cpt != '4')
			_putchar(cpt);
	}
	_putchar('\n');
}
