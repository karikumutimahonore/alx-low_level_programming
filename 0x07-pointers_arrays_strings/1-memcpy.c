#include "main.h"

/**
 * \*_memcpy - function that copies memory area.
 * @dest: it is memory area
 * @src: source
 * @n: bytes from memory area src
 *
 * Return: a pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
