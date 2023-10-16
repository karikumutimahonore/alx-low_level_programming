#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: the used string reference pointer
 * Return: 0
 */

void print_rev(char *s)
{
	int j = 0;

	while (s[j])
		j++;
	while (j--)
		_putchar(s[j]);
	_putchar('\n');
}
