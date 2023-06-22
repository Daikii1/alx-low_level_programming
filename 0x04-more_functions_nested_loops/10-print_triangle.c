#include "holberton.h"

/**
 * print_triangle - print triangle
 * @size: triangle tall
 */
void print_triangle(int size)
{
	int j, Mm;

	Mm = size;

	if (size <= 0)
		_putchar('\n');
	while (size > 0)
	{
		for (j = 0; j < Mm; j++)
			_putchar((j < size - 1) ? ' ' : '#');
		_putchar('\n');
		size--;
	}
}
