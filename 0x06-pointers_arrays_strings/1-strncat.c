#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * @dest: First string
 * @src: Second string to be appended
 * @n: The number of bytes
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int num = 0, dest_len = 0;

	while (dest[num++])
		dest_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[dest_len++] = src[num];
	return (dest);
}
