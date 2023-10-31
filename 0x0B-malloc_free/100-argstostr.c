#include "main.h"
#include <stdlib.h>

/**
 * argstostr -  function that concatenates all the arguments of your program.
 * @ac: The number of arguments..
 * @av: array arguments.
 *
 * Return: concat_str.
 */
char *argstostr(int ac, char **av)
{
	char *concat_str;
	int arguments, byt, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arguments = 0; arguments < ac; arguments++)
	{
		for (byt = 0; av[arguments][byt]; byt++)
			size++;
	}

	concat_str = malloc(sizeof(char) * size + 1);

	if (concat_str == NULL)
		return (NULL);

	i = 0;

	for (arguments = 0; arguments < ac; arguments++)
	{
		for (byt = 0; av[arguments][byt]; byt++)
			concat_str[i++] = av[arguments][byt];

		concat_str[i++] = '\n';
	}

	concat_str[size] = '\0';

	return (concat_str);
}
