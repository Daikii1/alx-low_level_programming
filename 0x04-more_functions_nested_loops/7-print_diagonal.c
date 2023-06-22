#include "main.h"

/**
 *  print_diagonal - a function that draws a diagonal line on the terminal
 *
 * @n: The INPUT
 */

void print_diagonal(int n)
{
	int LN, SP;

	if (n > 0)
	{
		for (LN = 0; LN < n; LN++)
		{
			for (SP = 0; SP < LN; SP++)
				_putchar(' ');
			_putchar('\\');

			if (line == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
