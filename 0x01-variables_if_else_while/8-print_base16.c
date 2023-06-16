#include <stdio.h>
/**
 * main - Entry point
 * usinng for loop and if to make hexadicimal program in c
 * Return: Always 0 (Success)
*/
int main(void)
{

	int DG;

	for (DG = 48; DG <= 57; DG++)
	{
		putchar(DG);
	}
	for (DG = 97; DG <= 102; DG++)
	{
		putchar(DG);
	}
	putchar('\n');
	return (0);
}
