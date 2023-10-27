#include <stdio.h>
#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	for (index = 0; index < argc; index++)
	printf("%s\n", argv[index]);

	return (0);
}
