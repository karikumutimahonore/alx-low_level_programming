#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: string to be declared
 *
 * Return:length
 */

int _strlen(char *s)
{
	int lgh = 0;

	while (s[lgh])
		lgh++;
	return (lgh);
}
