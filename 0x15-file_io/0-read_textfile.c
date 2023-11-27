#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: pointer name of the file
 * @letters: the number of letters that should be read and print
 * Return: q.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t dt;
	ssize_t q;
	ssize_t p;

	dt = open(filename, O_RDONLY);
	if (dt == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	p = read(dt, buffer, letters);
	q = write(STDOUT_FILENO, buffer, p);

	free(buffer);
	close(dt);
	return (q);
}

