#include "main.h"

/**
 * jack_bauer - function that prints every all min and hour of day
 *
 * Return: Always 0
 */
void jack_bauer(void)
{
	int hrr, mnn;

	for (hrr = 0; hrr <= 23; hrr++)
	{
		for (mnn = 0; mnn < 60; mnn++)
		{
			_putchar(hrr / 10 + '0');
			_putchar(hrr % 10 + '0');
			_putchar(':');
			_putchar(mnn / 10 + '0');
			_putchar(mnn % 10 + '0');
			_putchar('\n');
		}
	}
}
