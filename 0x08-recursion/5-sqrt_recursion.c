#include "main.h"
/**
  *myFunction - a fucntion that checks if sqrt of number exists
  *@nb: The number.
  *@SQ: sqrt of number
  *Return: sqrt of number
  */
int myFunction(int nb, int SQ)
{
	if ((SQ * SQ) == nb)
	{
		return (SQ);
	}
	else
	{
		if ((SQ * SQ) > nb)
			return (-1);
		else
			return (myFunction(nb, SQ + 1));

	}
}

/**
  *_sqrt_recursion - returns the natural square root of a number.
  *@n: the number that will find sqrt
  *Return: Square root of n.
  */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (myFunction(n, 0));
}
