#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry function
 *
 * Description: This program prints a message to the standard error stream.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(
		2,
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
		sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n") - 1
	);
	return (1);
}

