#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * starting with the first character, followed by a new line.
 * @str: it is  used string as reference
 * Return: 0
 */

void puts2(char *str)
{
	int k = 0;

	while (str[k] != '\0')
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
		k++;
	}
	_putchar('\n');
}
