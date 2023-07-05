#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: int n
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (_square(n, 1));
}

/**
 * _square - _square_recursion
 * @n: int
 * @cpt: int
 * Return: _square
 */
int _square(int n, int cpt)
{
	if (n < 0)
	return (-1);
	if ((cpt * cpt) > n)
	return (-1);
	if (cpt * cpt == n)
	return (cpt);
	return (_square(n, cpt + 1));
}
