#include "main.h"
#include <stdio.h>

/**
 * main - Entry piont
 * Return: Always 0
 */
int main(void)
{
	int IN = 1;

	for (; IN < 100 ; IN++)
	{
		if (IN % 3 == 0 && IN % 5 == 0)
			printf("FizzBuzz ");
		else if (IN % 3 == 0)
			printf("Fizz ");
		else if (IN % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", IN);
	}
	printf("Buzz\n");

	return (0);
}
