#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string that will printed
 * @n: number of strings
 *
 * Return: none
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int cpt;
	char *str;

	va_start(valist, n);

	for (cpt = 0; cpt < n; cpt++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (cpt < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
