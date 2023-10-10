#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers
 * starting with 1 and 2, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int j = 0, k = 1, n = 0;
	int result = 0;

	while (n < 4000000)
	{
		n = j + k;
		j = k;
		k = n;
		if (n % 2 == 0)
			result += n;
	}
	printf("%i\n", result);
	return (0);
}
