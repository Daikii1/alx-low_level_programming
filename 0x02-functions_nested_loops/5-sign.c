#include "main.h"

/**
 * print_sign - prints sign of a n
 * @n: n is an integr input
 *
 * Return: 1 and positiv, 0 zero and -1 negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
