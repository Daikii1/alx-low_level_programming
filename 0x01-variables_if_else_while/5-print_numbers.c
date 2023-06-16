#include <stdio.h>
/**
 * main - entry point
 * its a program with c that print digit numbers of base 10
 * Return: Always 0 (Success)
*/
int main(void)
{
	int nb;

	for (nb = 0; nb < 10; nb++)
	{
	putchar('0' + nb);
	}
	putchar('\n');
	return (0);
}

