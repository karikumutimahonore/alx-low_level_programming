#include <unistd.h>
/**
 * _putchar - writes the character c to standard output
 * @c: The char to print
 *
 * Return: 1 otherwise -1.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
