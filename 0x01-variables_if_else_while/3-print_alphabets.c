#include <stdio.h>
/**
 * main - entry point
 * alphabet in c
 * Return: Always 0 (Success)
*/
int main(void)
{
	char UP = 'A';
	char lo = 'a';

	/*lowercaser*/
	for (; lo <= 'z'; lo++)
	{
		putchar(lo);
	}

	/*uppercase*/
	for (; UP <= 'Z'; UP++)
	{
		putchar(UP);
	}
	putchar('\n');

	return (0);
}
