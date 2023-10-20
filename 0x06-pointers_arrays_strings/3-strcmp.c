#include "main.h"

/**
 * _strcmp - function that compares two strings
 * @s1: A pointer to the first string
 * @s2: A pointer to the second string
 *
 * Return: *s1 - *s2
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 && *s2) && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*s1 - *s2);
}
