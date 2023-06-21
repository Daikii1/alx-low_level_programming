#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints numbers to 98
 * @n: the input
 * Return: void
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%i, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%i, ", n);
			n--;
		}
	}
	printf("98\n");
}
