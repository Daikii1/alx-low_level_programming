#include "main.h"
#include <stdlib.h>
/**
 * main - multiplies two positive numbers
 * @argc: arguments
 * @argv: args
 * Return: integers
 */
int main(int argc, char *argv[])
{
	
	unsigned long ml;
	int cpt, a;
	if (argc != 3)
	{ printf("Error\n");
	exit(98); }
	for (cpt = 1; cpt < argc; cpt++)
	{
	for (a = 0; argv[cpt][a] != '\0'; a++)
		{
		if (argv[cpt][a] > 57 || argv[cpt][a] < 48)
			{  printf("Error\n");
			exit(98); }
		}

	}
	ml = atol(argv[1]) *  atol(argv[2]);
	printf("%lu\n", ml);
return (0);
}
