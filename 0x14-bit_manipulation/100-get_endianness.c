#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: pointer
 */
int get_endianness(void)
{
	int index;
	char *num;

	index = 1;
	num = (char *)&index;
	return (*num);
}

