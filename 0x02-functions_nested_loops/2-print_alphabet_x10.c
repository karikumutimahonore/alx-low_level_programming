#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet,
 * in lowercase, followed by a new line.
 */
void print_alphabet_x10(void)
{
	char lowerCase;
	int j;

	j = 0;
	while (j < 10)
	{
		lowerCase = 'a';
		while (lowerCase <= 'z')
		{
			_putchar(lowerCase);
			lowerCase++;
		}
		_putchar('\n');
		j++;
	}
}
