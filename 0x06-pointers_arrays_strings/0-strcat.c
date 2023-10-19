#include "main.h"

/**
 * *_strcat - function that concatenates two strings.
 * @src: First string
 * @dest: second string to be concat to first one
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int k = 0;
	int dest_len = 0;

	while (dest[k++])
		dest_len++;
	for (k = 0; src[k]; k++)
		dest[dest_len++] = src[k];
	return (dest);
}
