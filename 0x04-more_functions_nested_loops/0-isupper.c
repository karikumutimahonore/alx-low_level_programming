#include "main.h"

/**
 * _isupper - function that checks for uppercase character.
 * @c: integer variable to declared
 * Return: 1 if true otherwise 0
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
