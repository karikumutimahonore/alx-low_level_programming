#include "main.h"

/**
 * print_diagonal - function that draws a diagonal line on the terminal.
 * @n: number of times the character \ should be printed
 * Return: If n is 0 or less, the function should only print a \n
 */

void print_diagonal(int n)
{
	int num1 = 0, num2;

	while (num1 < n && n > 0)
	{
		num2 = 0;
		while (num2 < num1)
		{
			_putchar(' ');
			num2++;
		}

		_putchar('\\');
		_putchar('\n');
		num1++;
	}
	if (num1 == 0)
		_putchar('\n');
}
