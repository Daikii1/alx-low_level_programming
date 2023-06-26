#include "main.h"

/**
 * puts_half - ita a function that prints half of a string.
 * @str: the input string
 * Return: Nothing
 */
void puts_half(char *str)
{
	int LN = 0, CPT, X;

	while (str[LN] != '\0')
		LN++;

	if (LN % 2 == 0)
		X = LN / 2;

	else
		X = (LN + 1) / 2;

	for (CPT = X; CPT < LN; CPT++)
		_putchar(str[CPT]);

	_putchar('\n');
}
