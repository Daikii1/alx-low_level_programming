#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: Input number n
 * Retrun: None
 */
void print_to_98(int n)
{
	int b;

	if (n < 98)
	{
		for (b = n; b <= 98; b++)
		{
			if (b != n)
			{
				printf(", ");
			}
			printf("%i", b);
		}
	}
	else if (n >= 98)
	{
		for (b = n; b >= 98; b--)
		{
			if (b != n)
			{
				printf(", ");
			}
			printf("%i", a);
		}
	}
	printf("\n");
}
