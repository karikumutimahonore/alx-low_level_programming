#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - function that prints numbers,
 * followed by a new line.
 * @separator:  is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 * @...: list of numbers to be printed.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list_of_numbers;
	unsigned int num;

	va_start(list_of_numbers, n);
	for (num = 0; num < n; num++)
	{
		printf("%d", va_arg(list_of_numbers, int));

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(list_of_numbers);
}
