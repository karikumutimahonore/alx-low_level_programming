#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the programfor 101-crackme
 * Return: zero
 */
int main(void)
{
	int sum;
	char i;

	srand(time(NULL));
	while (sum <= 2645)
	{
		i = rand() % 128;
		sum += i;
		putchar(i);
	}
	putchar(2772 - sum);
	return (0);
}
