#include "main.h"
/**
 * print_binary - prints the binary representation
 * of a number.
 * @n: The unsigned long int.
 *
 * Return: No return.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
	_putchar('0');
	return;
	}
	for (int cpt = sizeof(n) * 8 - 1; cpt >= 0; cpt--)
	{
	_putchar((n >> cpt) & 1 ? '1' : '0');
	}
}

