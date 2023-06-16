#include <stdio.h>
/**
 * main - Entry point
 * program in simgle digit number using C
 * Return: Always 0 (Success)
*/
int main(void)
{
	int DG;

	for (DG = 0; DG <= 9; DG++)
	{
		putchar(DG + 48);
		if (DG != 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	printf("\n");
	return (0);
}
