#include "main.h"

int strlen_no_wilds(char *str);
void iterate_wild(char **wildstr);
char *postfix_match(char *str, char *postfix);
int wildcmp(char *s1, char *s2);

/**
 * strlen_no_wilds - function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @str: measured string.
 *
 * Return: The length.
 */
int strlen_no_wilds(char *str)
{
	int len = 0, num = 0;

	if (*(str + num))
	{
		if (*str != '*')
			len++;

		num++;
		len += strlen_no_wilds(str + num);
	}

	return (len);
}

/**
 * iterate_wild - function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @wildstr: iterated string.
 */
void iterate_wild(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		iterate_wild(wildstr);
	}
}

/**
 * postfix_match - function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @str: matched string.
 * @postfix: The postfix.
 *
 * Return: postfix.
 */
char *postfix_match(char *str, char *postfix)
{
	int str_len = strlen_no_wilds(str) - 1;
	int postfix_len = strlen_no_wilds(postfix) - 1;

	if (*postfix == '*')
		iterate_wild(&postfix);

	if (*(str + str_len - postfix_len) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (postfix_match(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - function that compares two strings
 * and returns 1 if the strings can be considered identical,
 * otherwise return 0.
 * @s1: first compared string.
 * @s2: second compared string.
 *
 * Return: 1 otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		iterate_wild(&s2);
		s2 = postfix_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}
