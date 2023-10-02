#include "main.h"

/**
 * append_text_to_file - Appends texts at end of file
 * @filename: ptr to name of the file
 * @text_content: str to add at the end of file
 *
 * Return:
 *         -1 if function fail
 *         -1 if filename is NULL
 *         -1 if file doesnt exist
 *         -1 if user lacks wr permissions
 *         otherwise retun 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
