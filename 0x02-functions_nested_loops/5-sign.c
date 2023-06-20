#include "main.h"
/**
 * print_sign - its a function to Verify the character is he lowercase
 * @n: input that will be verify
 * Return: return 1 for positive and -1 for negtavife and 0 for the rest
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n <= 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
