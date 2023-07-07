#include "main.h"

/**
 * _islower - checks for lowercase
 * @c: c is the input
 *
 * Return: 1 if lowercase letter
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
