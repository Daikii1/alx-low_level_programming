#include "main.h"
/**
 *description: a function that print lower cas characters using for loop
*/
void print_alphabet(void)
{
	int LC;

	for (LC = 'a'; LC <= 'z'; LC++)
		_putchar(LC);
	_putchar('\n');
}
