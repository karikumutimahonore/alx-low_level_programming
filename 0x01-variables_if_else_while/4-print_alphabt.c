#include <stdio.h>

/**
 * main - Execute the alphabet in lowercase,
 * except q and e
 *
 * Return: Aways 0 (Sucess)
 */

int main(void)

{

	char lowerCase = 'a';

	while (lowerCase <= 'z')

	{

		if (lowerCase != 'e' && lowerCase != 'q')

	{

		putchar(lowerCase);

	}

		lowerCase++;

	}

		putchar('\n');

	return (0);

}
