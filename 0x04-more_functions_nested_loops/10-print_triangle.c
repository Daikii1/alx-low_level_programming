#include "main.h"

/**
 * print_triangle -  its function that prints a triangle.
 * @size: the input int
 * Return: Always (0)
 */
void print_triangle(int size)
{
	int in = 0, j, nb = size - 1;

	if (size > 0)
	{
		for (; in < size; in++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < nb)
					_putchar(' ');
				else
					_putchar('#');
			}
			nb--;
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
