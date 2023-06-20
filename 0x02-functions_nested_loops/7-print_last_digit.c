#include "main.h"
/**
 * print_last_digit - its a function to Verify the character is he lowercase
 * @NB: input
 * Return: return last digit that is LD
*/
int print_last_digit(int NB)
{
	int LD;

	if (NB < 0)
	{
		LD = -1 * (NB % 10);
	}
	else
	{
		LD = NB % 10;
	}
	_putchar(LD + '0');
	return (LD);
}
