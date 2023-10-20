#include "main.h"
#include <stdio.h>

/**
 * print_buffer - function that prints a buffer
 * @b: The buffer to be printed.
 * @size: The number of bytes to be printed from the buffer.
 */

void print_buffer(char *b, int size)
{
	int byt, i;

	for (byt = 0; byt < size; byt += 10)
	{
		printf("%08x: ", byt);

		for (i = 0; i < 10; i++)
		{
			if ((i + byt) >= size)
				printf("  ");
			else
				printf("%02x", *(b + i + byt));
			if ((i % 2) != 0 && i != 0)
				printf(" ");
		}
		for (i = 0; i < 10; i++)
		{
			if ((i + byt) >= size)
				break;
			else if (*(b + i + byt) >= 31 &&
				 *(b + i + byt) <= 126)
				printf("%c", *(b + i + byt));
			else
				printf(".");
		}
		if (byt >= size)
			continue;
		printf("\n");
	}
	if (size <= 0)
		printf("\n");
}
