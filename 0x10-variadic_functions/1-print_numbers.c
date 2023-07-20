#include "variadic_functions.h"

/**
 * print_numbers - prints numbers.
 * @separator: the string to be print
 * @n: number of integers
 * Return: None
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int cpt;

	va_start(valist, n);

	for (cpt = 0; cpt < n; cpt++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && cpt < n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
