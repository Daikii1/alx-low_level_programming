#include "main.h"

/**
 * print_last_digit - function of last digit
 * @NB: Input of integr
 * Return: Last digit of the Input
 */
int print_last_digit(int NB)
{
	int LT;

	if (NB < 0)
		NB = -NB;
	LT = NB % 10;
	if (LT < 0)
		LT = -l;
	_putchar(LT + '0');
	return (LT);
}
