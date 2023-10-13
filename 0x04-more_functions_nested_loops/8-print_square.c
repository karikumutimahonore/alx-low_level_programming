#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @n: Use the character # to print the square
 * Return: void
 */

void print_square(int n)
{
	int num1 = 0, num2;

	while (num1 < n && n > 0)
	{
		num2 = 0;
		while (num2 < n)
		{
			_putchar('#');
			num2++;
		}
		_putchar('\n');
		num1++;
	}
	if (num1 == 0)
		_putchar('\n');
}
