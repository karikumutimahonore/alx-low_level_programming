#include "main.h"
/**
 * _strcmp - compare two string values
 * @s1: input value
 * @s2: input value
 *
 * Return: 0.
 */
int _strcmp(char *s1, char *s2)
{
	int index;

	index = 0;
	while (s1[index] != '\0' && s2[index] != '\0')
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
			index++;
		}
	return (0);
}
