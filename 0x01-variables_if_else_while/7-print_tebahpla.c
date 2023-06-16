#include <stdio.h>
/**
 * main - entry point
 * its a program with c that print digit numbers of base 10
 * Return: Always 0 (Success)
*/
int main(void)
{

	char LT = 'z';

	while (LT >= 'a')
	{
	putchar(LT);
	LT--;
	}

	putchar('\n');
	return (0);
}
