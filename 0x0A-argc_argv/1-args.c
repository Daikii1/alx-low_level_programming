#include <stdio.h>
/**
 * main - prints the number of arguments passed into it.
 * @argc: number of cmd line arguments.
 * @argv: array theat can  contains the program command line arg.
 * Return: (0) - with success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
