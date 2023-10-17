#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: string to be printed
 * Return: 0
 */

void rev_string(char *s)
{
	int len, j, h;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	j = 0;
	h = len / 2;

	while (h--)
	{
		temp = s[len - j - 1];
		s[len - j - 1] = s[j];
		s[j] = temp;
		j++;
	}
}
