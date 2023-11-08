#include "honore.h"

/**
 * print_name - function that prints a name
 * @name: name to be declared
 * @f: A pointer that store the address of printed name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
