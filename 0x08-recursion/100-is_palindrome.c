#include "main.h"

int find_strlen(char *s);
int check_palindrome(char *s, int len, int string);
int is_palindrome(char *s);

/**
 * find_strlen - Returns the length of a string.
 * @s: The string to be measured.
 *
 * Return: The length of the string.
 */
int find_strlen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += find_strlen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: checked string.
 * @len: The length of s.
 * @string: string to be checked.
 *
 * Return: 1 otherwise 0.
 */
int check_palindrome(char *s, int len, int string)
{
	if (s[string] == s[len / 2])
		return (1);

	if (s[string] == s[len - string - 1])
		return (check_palindrome(s, len, string + 1));

	return (0);
}

/**
 * is_palindrome - function that returns 1 if a string is a palindrome
 * and 0 if not
 * @s: checked string.
 *
 * Return: 1 otherwise 0.
 */
int is_palindrome(char *s)
{
	int string = 0;
	int len = find_strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, len, string));
}
