#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that is multiplies two numbers
 * @argc: argument counte for main
 * @argv:  the arguments
 *
 * Return: (0) Sucsesse else fail.
 */

int main(int argc, char *argv[])
{
	int SM = 0;

	if (argc == 3)
	{
		SM = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", SM);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
