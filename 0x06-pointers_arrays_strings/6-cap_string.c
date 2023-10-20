#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 *
 * @s: char input array
 *
 * Return: s
 */
char *cap_string(char *s)
{
	int index = 0;

	while (s[index] != '\0')
	{
		if (s[index] >= 97 && s[index] <= 122)
		{
			if (index == 0)
			{
				s[index] -= 32;
			}
			if (s[index - 1] == 32 || s[index - 1] == 9 || s[index - 1] == 10 ||
					s[index - 1] == 44 || s[index - 1] == 59 || s[index - 1] == 46 ||
					s[index - 1] == 33 || s[index - 1] == 63 || s[index - 1] == 34 ||
					s[index - 1] == 40 || s[index - 1] == 41 || s[index - 1] == 123 ||
					s[index - 1] == 124)
			{
				s[index] -= 32;
			}
		}
		index++;
	}
	return (s);
}
