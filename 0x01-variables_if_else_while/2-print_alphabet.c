#include <stdio.h>
/**
 * main - entry point
 * making a putchar alphabet
 * Return: Always 0 (Success)
*/
int main(void)
{
	for (char ch = 'a'; ch <= 'z'; ch = ch + 1)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
