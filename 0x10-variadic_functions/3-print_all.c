#include "variadic_functions.h"

/**
 * print_all - fucntion that prints anything.
 * @format: a list of types of arguments
 *
 * Return: none
 */
void print_all(const char * const format, ...)
{
	va_list valist;
	unsigned int cpt = 0, j, c = 0;
	char *str;
	const char t_arg[] = "cifs";

	va_start(valist, format);
	while (format && format[cpt])
	{
		j = 0;
		while (t_arg[j])
		{
			if (format[cpt] == t_arg[j] && c)
			{
				printf(", ");
				break;
			} j++;
		}
		switch (format[cpt])
		{
		case 'c':
			printf("%c", va_arg(valist, int)), c = 1;
			break;
		case 'i':
			printf("%d", va_arg(valist, int)), c = 1;
			break;
		case 'f':
			printf("%f", va_arg(valist, double)), c = 1;
			break;
		case 's':
			str = va_arg(valist, char *), c = 1;
			if (!str)
			{
				printf("(nil)");
				break;
			}
			printf("%s", str);
			break;
		} cpt++;
	}
	printf("\n"), va_end(valist);
}
