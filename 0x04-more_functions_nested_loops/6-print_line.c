#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: variable that declared
 *
 * Return: 0
 */

void print_line(int n)
{
	int num = 0;

	while (num < n && n > 0)
	{
		_putchar('_');
		num++;
	}
	_putchar('\n');
}
