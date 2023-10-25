#include "main.h"

int is_divisible(int index, int divider);
int is_prime_number(int n);

/**
 * is_divisible - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @index: checked number.
 * @divider: The divisor.
 *
 * Return: if rem is 0 return 0, 
 *         if rem not 0 return 1.
 */
int is_divisible(int index, int divider)
{
	if (index % divider == 0)
		return (0);

	if (divider == index / 2)
		return (1);

	return (is_divisible(index, divider + 1));
}

/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number,
 * otherwise return 0.
 * @n: checked number.
 *
 * Return: if rem is 0 return 0, 
 *         if rem not 0 return 1.
 */
int is_prime_number(int n)
{
	int divider = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (is_divisible(n, divider));
}
