#include "variadic_functions.h"

/**
 * sum_them_all - a fucntion that returns the sum of all its parameters.
 * @n: amount of the arguments.
 *
 * Return: the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int cpt;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(valist, n);

	for (cpt = 0; cpt < n; cpt++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
