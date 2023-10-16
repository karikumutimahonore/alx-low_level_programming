#include "main.h"

/**
 * swap_int -  function that swaps the values of two integers.
 * @a: pointer1
 * @b: pointer2
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
