#include "main.h"

int find_sqrt(int index, int rt);
int _sqrt_recursion(int n);

/**
 * find_sqrt - function that returns the natural square root of a number.
 * @index: The number used to find the square root.
 * @rt: Tested root.
 *
 * Return: if n < 0 return -1, if n > 0 return 1.
 */
int find_sqrt(int index, int rt)
{
	if ((rt * rt) == index)
		return (rt);

	if (rt == index / 2)
		return (-1);

	return (find_sqrt(index, rt + 1));
}

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: The number used to return the square root.
 *
 * Return: if n < 0 return -1, if n > 0 return 1.
 */
int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, rt));
}
