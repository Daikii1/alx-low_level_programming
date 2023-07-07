#include <stdio.h>

/**
 * main - print the name of the file followed by a new line
 * @argc: argument counterr
 * @argv: arguments pass to the  main array of strings
 * Return: (0) withe  success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
