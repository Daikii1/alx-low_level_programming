#include <stdio.h>
/**
 * main - prints all arguments it receives.
 * @argc: the number of command line arguments.
 * @argv: the array that contains the program command line arguments.
 * Return: 0 - with  success.
 */
int main(int argc, char *argv[])
{
	int cpt;

	for (cpt = 0; cpt < argc; cpt++)
		printf("%s\n", argv[cpt]);
	return (0);
}
