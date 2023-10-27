#include "main.h"

/**
 * _puts - function that  prints a string.
 * @str: string to print
 *
 * Return: 0
 */

void _puts(char *str)
{
	int index = 0;

	while (str[index])
	{
		_putchar(str[index]);
		index++;
	}
	_putchar('\n');
}
