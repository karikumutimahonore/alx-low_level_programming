#include "main.h"

/**
 * \*_strcpy -  program copies the string pointed to by src
 * @dest: copy to
 * @src: copy from
 * the buffer pointed to by `dest`
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int index = -1;

	do {
		index++;
		dest[index] = src[index];
	} while (src[index] != '\0');

	return (dest);
}
