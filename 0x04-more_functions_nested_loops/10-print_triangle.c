#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size :  is the size of the triangle
 * Return: Use the character # to print the triangle
 */

void print_triangle(int size)
{
	int num1 = 1, num2;

	while (num1 <= size && size > 0)
	{
		num2 = 0;
		while (num2 < size - num1)
		{
			_putchar(' ');
			num2++;
		}
		num2 = 0;
		while (num2 < num1)
		{
			_putchar('#');
			num2++;
		}

		_putchar('\n');
		num1++;
	}
	if (num1 == 1)
		_putchar('\n');
}
