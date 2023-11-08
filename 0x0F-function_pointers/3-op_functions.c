#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - print the Addition of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Addition of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - prrints the difference between two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - prints the multiplication of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Multiplication of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - prints division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: The quotient of a and b.
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - prints the remainder of the division of two numbers.
 * @a: First number.
 * @b: Second number.
 *
 * Return: Remainder of the division of a by b.
 */
int op_mod(int a, int b)
{
	return (a % b);
}
