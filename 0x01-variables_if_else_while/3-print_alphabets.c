#include <stdio.h>
/**
 * main - entry point
 * alphabet in c
 * Return: Always 0 (Success)
*/
int main(void)
{
	char up = 'a';
	char lo = 'A';

	/*lowercaser*/
	for (; lo <= 'z'; lo++)
	{
		putchar(lo);
	}

	/*uppercase*/
	for (; up <= 'Z'; up++)
	{
		putchar(up);
	}
	putchar('\n');

	return (0);
}
