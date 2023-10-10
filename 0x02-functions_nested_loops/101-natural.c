#include <stdio.h>

/**
 * main - list all the natural numbers below 10 that are multiples of 3 or 5
 * Return: 0
 */
int main(void)
{
	int x, y = 0;

	while (x < 1024)
	{
		if ((x % 3 == 0) || (x % 5 == 0))
		{
			y += x;
		}

		x++;
	}

	printf("%d\n", y);
	return (0);
}
