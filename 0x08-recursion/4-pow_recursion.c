#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number that will be raised
 * @y: The pow
 * Return: The value of x raised to the pow of y.
 */
int _pow_recursion(int x, int y)
{
	int RST = x;

	if (y < 0)
	return (-1);

	else if (y == 0)
	return (1);

	RST *= _pow_recursion(x, y - 1);

	return (RST);
}
