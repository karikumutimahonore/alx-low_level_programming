#include "main.h"

/**
 * \*_memset - function that fills memory with a constant byte
 * @s: constant
 * @b: constant
 * @n: bytes to be used
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; n > 0; index++, n--)
	{
		s[index] = b;
	}

	return (s);
}
