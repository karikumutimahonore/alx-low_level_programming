#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: integer type
 * @n: integer type
 */

void print_array(int *a, int n)
{
	int j;

	j = 0;
	for (n--; n >= 0; n--, j++)
	{
		printf("%d", a[j]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
