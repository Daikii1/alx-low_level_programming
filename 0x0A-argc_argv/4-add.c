#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - adds positive numbers.
 * @argc: number of command line argus
 * @argv: array that contains the program command line argus
 * Return: 0 - with sucsese
 */
int main(int argc, char *argv[])
{
	int cpt, j, adds = 0;

	for (cpt = 1; cpt < argc; cpt++)
	{
		for (j = 0; argv[cpt][j] != '\0'; j++)
		{
			if (!isdigit(argv[cpt][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		adds += atoi(argv[cpt]);
	}
	printf("%d\n", adds);
	return (0);
}
