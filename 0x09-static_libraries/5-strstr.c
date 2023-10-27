#include "main.h"
/**
 * _strstr - main function
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *r = haystack;
		char *q = needle;

		while (*r == *q && *q != '\0')
		{
			r++;
			q++;
		}
		if (*q == '\0')
			return (haystack);
	}
	return (0);
}
