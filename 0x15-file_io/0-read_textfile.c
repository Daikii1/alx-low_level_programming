#include "main.h"
/**
 * read_textfile - reads a text file and prints the letters
 * @filename: The filename.
 * @letters: The Numbers of letters printed.
 * Return: The Numbers of letters printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int FD;
	ssize_t n_rd, n_wr;
	char *buf;

	if (!filename)
		return (0);

	FD = open(filename, O_RDONLY);

	if (FD == -1)
	return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
	return (0);

	n_rd = read(fd, buf, letters);
	n_wr = write(STDOUT_FILENO, buf, n_rd);

	close(FD);

	free(buf);

	return (n_wr);
}
