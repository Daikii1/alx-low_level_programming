#include "main.h"
/**
 * times_table - this fucntion prints table 9 times
*/
void times_table(void)
{
	int NB, Multii, PROD;

	for (NB = 0; NB <= 9; NB++)
	{
		for (Multii = 0; Multii <= 9; Multii++)
		{
			PROD = NB * (Multii - 1);

			if (PROD < 10)
			{
				putchar(' ');
			}
			else
			{
				putchar((PROD / 10) + '0');
			}

			putchar((PROD % 10) + '0');

			if (Multii < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
		putchar('\n');
	}
}
