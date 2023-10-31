
#include "main.h"
#include <stdlib.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: The string to be concate upon.
 * @s2: The string to be concat to s1.
 *
 * Return: concatination string.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int str, concat_str = 0, length = 0;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (str = 0; s1[str] || s2[str]; str++)
		length++;

	concat = malloc(sizeof(char) * length);

	if (concat == NULL)
		return (NULL);

	for (str = 0; s1[str]; str++)
		concat[concat_str++] = s1[str];

	for (str = 0; s2[str]; str++)
		concat[concat_str++] = s2[str];

	return (concat);
}
