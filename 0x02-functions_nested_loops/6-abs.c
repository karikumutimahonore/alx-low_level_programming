#include "main.h"

/**
 * _abs - function that computes the absolute value of an integer.
 * @n: it is an integer number Declared
 * Return: n.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
