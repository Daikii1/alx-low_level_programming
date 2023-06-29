#include "main.h"
/**
 * reverse_array - a fucntion that reverses the content of an array of int
 * @a: array.
 * @n: number of elements in the array
 * Return: No return.
 */

void reverse_array(int *a, int n)
{
	int cpt, j, tp;

	for (cpt = 0; cpt < n - 1; cpt++)
	{
		for (j = cpt + 1; j > 0; j--)
		{
			tp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a + (j - 1)) = tp;
		}
	}
}
