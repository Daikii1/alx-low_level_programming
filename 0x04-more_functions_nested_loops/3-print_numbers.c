#include "main.h"

/**
 * print_numbers - prints numbers
 *
 * Return:
 */

void print_numbers(void)
{
	int nb;

	for (nb = '0'; nb <= '9'; nb++)
	{
		_putchar(nb);
	}
	_putchar('\n');
}
