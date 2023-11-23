#include "main.h"

/**
 * flip_bits - function that returns the number of bits
 * @n: first number
 * @m: second number
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int index, num_bit = 0;
	unsigned long int curr;
	unsigned long int num = n ^ m;

	for (index = 63; index >= 0; index--)
	{
		curr = num >> index;
		if (curr & 1)
			num_bit++;
	}
	return (num_bit);
}

