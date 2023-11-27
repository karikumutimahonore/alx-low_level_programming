#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of a file.
 * @text_content: a NULL terminated string.
 *
 * Return: 1 otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, fWrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	file = open(filename, O_WRONLY | O_APPEND);
	fWrt = write(file, text_content, len);

	if (file == -1 || fWrt == -1)
		return (-1);

	close(file);

	return (1);
}

