#include "main.h"

/**
 * more_numbers - function that prints 10 times the numbers,
 * from 0 to 14, followed by a new line.
 *
 * Return: void
 */

void more_numbers(void)
{
	char num1, num2;
	int j = 0;

	while (j < 10)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			num2 = num1;
			if (num1 > 9)
			{
				_putchar('1');
				num2 = num1 % 10;
			}
			_putchar('0' + num2);
		}

		_putchar('\n');
		j++;
	}
}
