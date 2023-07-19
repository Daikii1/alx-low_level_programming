#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name:the string  name to be printed
 * @f: pointer that is printing function
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	return;
	f(name);
}
