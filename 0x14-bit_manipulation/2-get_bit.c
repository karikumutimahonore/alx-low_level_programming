#include"main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number to check bits
 * @index: check bit
 *
 * Return: 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int div, checker;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	div = 1 << index;
	checker = n & div;
	if (checker == div)
		return (1);
	return (0);
}
