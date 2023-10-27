#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program that adds positive numbers.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 1 otherwise 0.
 */

int main(int argc, char *argv[])
{
	int x, y, len, result;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		result = 0;
		for (x = 1; x < argc; x++)
		{
			ptr = argv[x];
			len = strlen(ptr);

			for (y = 0; y < len; y++)
			{
				if (isdigit(*(ptr + y)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			result += atoi(argv[x]);
		}

		printf("%d\n", result);
	}
	return (0);
}
