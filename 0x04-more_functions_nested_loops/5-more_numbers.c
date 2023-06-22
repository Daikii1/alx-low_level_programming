#include "main.h"

/**
 * more_numbers - prints numbers from 0 to 14; 10 times.
 *
 * Return: void.
 */

void more_numbers(void)
{
	int nb, cpt;

	for (cpt = 0; cpt <= 9; cpt++)
	{
		for (nb = 0; nb <= 14; nb++)
		{
			if (nb > 9)
				_putchar((nb / 10) + '0');
			_putchar((nb % 10) + '0');
		}
		_putchar('\n');
	}
}
