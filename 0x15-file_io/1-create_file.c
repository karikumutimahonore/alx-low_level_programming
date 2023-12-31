#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file you want to create.
 * @text_content: a NULL terminated string to write to the file.
 *
 * Return: 1 otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int fOpen, fWrt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fOpen = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	fWrt = write(fOpen, text_content, len);

	if (fOpen == -1 || fWrt == -1)
		return (-1);

	close(fOpen);

	return (1);
}

