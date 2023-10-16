#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line,
 * @str: pointer to a string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int k = 0;

	while (str[k])
	{
		_putchar(str[k]);
		k++;
	}
	_putchar('\n');
}
