#include "main.h"

/**
 * _strspn - print the length of prefix.
 * @s: searched string.
 * @accept: measured prefix.
 *
 * Return: r.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
			{
				r++;
				break;
			}

			else if (accept[n + 1] == '\0')
				return (r);
		}

		s++;
	}

	return (r);
}
