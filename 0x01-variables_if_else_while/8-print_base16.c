#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 *
 * Return:0
 */

int main(void)

{

	int num;

	char lowerCase;

	for (num = 48; num < 58; num++)

	{

		putchar(num);

	}

	for (lowerCase = 'a'; lowerCase <= 'f'; lowerCase++)

	{

	putchar(lowerCase);

	}

	putchar('\n');

	return (0);

}
