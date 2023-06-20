#include "main.h"
/**
 *main - entry point
 *description: a function thet print lower cas characters using for loop
 **Return: Return: Always 0
*/
void print_alphabet(void)
{
	int LC;

	for (LC = 'a'; LC <= 'z'; LC++)
		_putchar(LC);
	_putchar('\n');
}
