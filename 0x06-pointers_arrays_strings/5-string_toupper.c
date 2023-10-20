#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 *  letters of a string to uppercase
 * @str: The string to be changed.
 *
 * Return: changed string.
 */
char *string_toupper(char *str)
{
	int letter = 0;

	while (str[letter])
	{
		if (str[letter] >= 'a' && str[letter] <= 'z')
			str[letter] -= 32;

		letter++;
	}

	return (str);
}
