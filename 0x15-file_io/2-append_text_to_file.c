#include "main.h"
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: this is the name of the file
 * @text_content: the content that added to the file
 * Return: 1 if the file existe, -1 otherwise.
 */
int append_text_to_file(const char *filename, char *text_content)
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

	Op = open(filename, O_WRONLY | O_APPEND);
	wr = write(Op, text_content, cpt);

	if (Op == -1 || wr == -1)
		return (-1);

	close(Op);

	return (1);
}
