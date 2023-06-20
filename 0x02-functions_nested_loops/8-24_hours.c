#include "main.h"
/**
 * jack_bauer - its a functionthat can print time of day
*/
void jack_bauer(void)
{
	int Hrr, Mnn;

	for (Hrr = 0; Hrr <= 23; Hrr++)
	{
		for (Mnn = 0; Mnn <= 59; Mnn++)
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
