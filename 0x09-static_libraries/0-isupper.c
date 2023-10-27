#include "main.h"
/**
 * _isupper - function print uppercase letters
 * @c: char to be check
 *
 * Return: 1 otherwise 0.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

