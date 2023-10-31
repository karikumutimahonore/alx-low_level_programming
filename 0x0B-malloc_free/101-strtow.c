#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);

/**
 * word_len - function that splits a string into words.
 * @str: The string to be searched.
 *
 * Return: length.
 */
int word_len(char *str)
{
	int i = 0, length = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * count_words - The function returns a pointer to an array of strings (words)
 * @str: The string to be searched.
 *
 * Return: word.
 */
int count_words(char *str)
{
	int i = 0, word = 0, length = 0;

	for (i = 0; *(str + i); i++)
		length++;

	for (i = 0; i < length; i++)
	{
		if (*(str + i) != ' ')
		{
			word++;
			i += word_len(str + i);
		}
	}

	return (word);
}

/**
 * strtow - Words are separated by spaces
 * @str: The string to be split.
 *
 * Return: string.
 */
char **strtow(char *str)
{
	char **string;
	int i = 0, word, q, letter, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	word = count_words(str);
	if (word == 0)
		return (NULL);

	string = malloc(sizeof(char *) * (word + 1));
	if (string == NULL)
		return (NULL);

	for (q = 0; q < word; q++)
	{
		while (str[i] == ' ')
			i++;

		letter = word_len(str + i);

		string[q] = malloc(sizeof(char) * (letter + 1));

		if (string[q] == NULL)
		{
			for (; q >= 0; q--)
				free(string[q]);

			free(string);
			return (NULL);
		}

		for (l = 0; l < letter; l++)
			string[q][l] = str[i++];

		string[q][l] = '\0';
	}
	string[q] = NULL;

	return (string);
}
