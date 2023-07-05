#include "main.h"
/**
  *myFunction - returns 0 or 1.
  *@nb: number that wil be checked.
  *@cpt: factor of the number.
  *
  *Return: 0 for not  prime, 1 if he is  prime.
  */
int myFunction(int nb, int cpt)
{
	if (cpt < nb)
	{
	if (nb % cpt == 0)
	{
		return (0);
	}
	else
	{
		return (myFunction(nb, cpt + 1));
	}
	}
	else
	{
		return (1);
	}
}

/**
  *is_prime_number - checks if number is prime or not.
  *@n: number that will be checked.
  *
  *Return: 1 for prime, 0 for not.
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else
	{
		return (myFunction(n, 2));
	}
}
