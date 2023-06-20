#include "main.h"

/**
 * _islower - function that verify for lowercase character
 * @c: The input
 * Return: 1 if it lowercase if its not 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return (0);
}
