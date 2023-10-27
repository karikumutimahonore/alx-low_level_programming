#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that prints the minimum number of coins
 * to make change for an amount of money.
 * @argc: Argument count
 * @argv: Argument vector
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int money, coin = 0;

	if (argc == 1 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}

	money = atoi(argv[1]);

	while (money > 0)
	{
		if (money >= 25)
			money -= 25;
		else if (money >= 10)
			money -= 10;
		else if (money >= 5)
			money -= 5;
		else if (money >= 2)
			money -= 2;
		else if (money >= 1)
			money -= 1;
		coin += 1;
	}
	printf("%d\n", coin);
	return (0);
}
