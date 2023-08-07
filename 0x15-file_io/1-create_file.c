#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: file name.
 * @text_content: the content in the file.
 * Return: If the function fail - -1.
 * else - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int Op, wr;
	int cpt = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (cpt = 0; text_content[cpt];)
			cpt++;
	}

	Op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wr = write(Op, text_content, cpt);

	if (Op == -1 || wr == -1)
	return (-1);

	close(Op);

	return (1);
}
