#include "main.h"
#include <stdlib.h>

/**
 * print_triangle - a function print a triangle
 * @size : the intger
 *
 */

void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int in, jn;

		for (in = 1; in <= size; in++)
		{
			for (jn = in; jn < size; jn++)
			{
				_putchar(' ');
			}

			for (jn = 1; jn <= in; jn++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}
