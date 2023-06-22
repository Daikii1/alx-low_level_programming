#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9 except 2 and 4
 * Return: void.
 */

void print_most_numbers(void)
{
	int nb;

	for (nb = 0; nb <= 9; nb++)
	{
		if (nb != 2 && nb != 4)
			_putchar((nb % 10) + '0');
	}
	_putchar('\n');
}
