#include "main.h"
/**
 * times_table - this fucntion prints table 9 times
*/
void times_table(void)
{
	int NB, Multii, PROD;

	for (NB = 0; NB <= 9; NB++)
	{
		_putchar(48);
		for (Multii = 1; Multii <= 9; Multii++)
		{
			_putchar(',');
			_putchar(' ');
			PROD = NB * NB;
			if (PROD <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((PROD / 10) + 48);
				_putchar((PROD % 10) + 48);
			}
		}
		_putchar('\n');
	}
}
