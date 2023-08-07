#include "main.h"
#include <stdio.h>

/**
 * error_file - The apc checks if files Can be opened.
 * @file_from: The ,file_from.
 * @file_to: The file_to.
 * @argv: The Arguments vector.
 * Return: No return.
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main -The program check the code for ALX School students.
 * @argc:This is the number of arguments.
 * @argv: The arguments vector.
 * Return: Always (0).
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_c;
	ssize_t N_chars, n_wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	N_chars = 1024;
	while (N_chars == 1024)
	{
		N_chars = read(file_from, buf, 1024);
		if (N_chars == -1)
			error_file(-1, 0, argv);
		n_wr = write(file_to, buf, N_chars);
		if (n_wr == -1)
			error_file(0, -1, argv);
	}

	err_c = close(file_from);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_c = close(file_to);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
