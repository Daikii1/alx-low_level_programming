#include "main.h"
/**
 * jack_bauer - its a functionthat can print time of day
*/
void jack_bauer(void)
{
	for (int Hrr = 0; Hrr < 24; Hrr++)
	{
		for (int Mnn = 0; Mnn < 60; Mnn++)
		{
			putchar(Hrr / 10 + '0');
			putchar(Hrr % 10 + '0');
			putchar(':');
			putchar(Mnn / 10 + '0');
			putchar(Mnn % 10 + '0');
			putchar('\n');
		}
	}
}

