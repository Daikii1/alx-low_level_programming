#include <stdio.h>
/**
 * main - Entry point
 * ASCII
 * Return: Always 0 (Success)
*/
int main(void)
{
	int DG = 0;

	while (DG <= 9)
	{
	putchar(DG + '48');
	DG++;
	}
	putchar('\n');
	return (0);
}
