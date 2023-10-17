#include "main.h"

/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 * @str: it is  used string as reference
 * Return: 0
 */

void puts_half(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	k++;
	for (k /= 2; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
