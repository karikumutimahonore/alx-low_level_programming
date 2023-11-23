#include "main.h"

/**
 * binary_to_uint - converts a binary to decimal
 * @b: binary value to be converted
 *
 * Return: converted num
 */
unsigned int binary_to_uint(const char *b)
{
	int num;
	unsigned int num_to_be_converted = 0;

	if (!b)
		return (0);

	for (num = 0; b[num]; num++)
	{
		if (b[num] < '0' || b[num] > '1')
			return (0);
		num_to_be_converted = 2 * num_to_be_converted + (b[num] - '0');
	}

	return (num_to_be_converted);
}

