#include "main.h"

/**
 * factorial - a fucntion that  Returns the factorial of a given number.
 * @n: The number to find the factorial of.
 *
 * Return: RST
 */
int factorial(int n)
{
	int RST = n;

	if (n < 0)
	return (-1);

	else if (n >= 0 && n <= 1)
	return (1);

	RST *= factorial(n - 1);

	return (RST);
}
