#include "main.h"
#include <stdio.h>

/**
 * print_array - its a fucntion prints n elements of an array of integers.
 * @a: input array.
 * @n: input n
 * Return: Noting
 */
void print_array(int *a, int n)
{
	int cpt = 0;

	for (; cpt < n; cpt++)
	{
		printf("%d", *(a + cpt));
		if (cpt != (n - 1))
			printf(", ");
	}
	printf("\n");
}
