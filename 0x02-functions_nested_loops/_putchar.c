#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @ltr: The character to print
 *
 * Return: On success 1 otherwise it is error
 */
int _putchar(char ltr)
{
	return (write(1, &ltr, 1));
}
