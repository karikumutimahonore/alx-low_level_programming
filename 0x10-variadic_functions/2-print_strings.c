#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints strings,
 * followed by a new line.
 * @separator:  is the string to be printed between numbers.
 * @n: is the number of integers passed to the function.
 * @...: list of numbers to be printed.
 *
 * Return: strings.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list string;
	char *str;
	unsigned int num;

	va_start(string, n);

	for (num = 0; num < n; num++)
	{
		str = va_arg(string, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (num != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(string);
}
