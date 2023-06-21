#include "main.h"
/**
 * times_table - function that prints the 9 times table
 * Return: Always 0
 */
void times_table(void)
{
	int AR, BR, CR;

	for (AR = 0; AR < 10; AR++)
	{
		for (BR = 0; BR < 10; BR++)
		{
			CR = AR * BR;
			if (BR != 0)
			{
				if (CR < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			if (CR < 10)
			{
				_putchar(CR + '0');
			}
			else
			{
				_putchar(CR / 10 + '0');
				_putchar(CR % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
