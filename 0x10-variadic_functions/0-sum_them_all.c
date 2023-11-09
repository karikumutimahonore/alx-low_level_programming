#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: Number of arguments passed to the function.
 * @...: list of number of parameters to be added.
 *
 * Return: Sum otherwise 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list_of_numbers;
	unsigned int num, sum = 0;

	va_start(list_of_numbers, n);
	for (num = 0; num < n; num++)
		sum = sum + va_arg(list_of_numbers, int);

	va_end(list_of_numbers);

	return (sum);
}
