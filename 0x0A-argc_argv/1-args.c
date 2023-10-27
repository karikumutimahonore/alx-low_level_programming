#include <stdio.h>
#include "main.h"

/**
 * main - program that prints the number of arguments passed into it.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (index = 0; *argv; index++, argv++)
			;

		printf("%d\n", index - 1);
	}

	return (0);
}
