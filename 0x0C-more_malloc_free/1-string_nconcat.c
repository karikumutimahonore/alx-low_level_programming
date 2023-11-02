#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: First string.
 * @s2: Second string.
 * @n: bytes of s2 to concatenate to s1.
 *
 * Return: concatenate.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatenate;
	unsigned int len = n, i;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		len++;

	concatenate = malloc(sizeof(char) * (len + 1));

	if (concatenate == NULL)
		return (NULL);

	len = 0;

	for (i = 0; s1[i]; i++)
		concatenate[len++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		concatenate[len++] = s2[i];

	concatenate[len] = '\0';

	return (concatenate);
}
