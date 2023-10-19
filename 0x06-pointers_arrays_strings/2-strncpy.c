#include "main.h"

/**
 * _strncpy - function that copies a string
 * @dest: String 1
 * @src: string 2
 * @n: The maximum number
 *
 * Return: string dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int num = 0, src_len = 0;

	while (src[num++])
		src_len++;

	for (num = 0; src[num] && num < n; num++)
		dest[num] = src[num];

	for (num = src_len; num < n; num++)
		dest[num] = '\0';

	return (dest);
}
