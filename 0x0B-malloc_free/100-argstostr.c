#include "main.h"
#include <stdlib.h>

/**
 * argstostr - a function that concatenates
 *             all the arguments
 *
 * @ac: argument counter
 * @av: argument holder
 *
 * Return: pointer of an array of char
*/

char *argstostr(int ac, char **av)
{
	int d, p, k, length;
	char *liloo;

	if (ac == 0 || av == NULL)
		return (NULL);

	/*find length of vector + '\0' which makes it a 2d array*/
	length = 0;
	for (d = 0; d < ac; d++)
	{
		for (p = 0; av[d][p] != '\0'; p++)
			length++;
		length++;
	}

	liloo = malloc((length + 1) * sizeof(char));
	if (liloo == NULL)
		return (NULL);

	k = 0;
	for (d = 0; d < ac; d++)
	{
		for (p = 0; av[d][p] != '\0'; p++)
		{
			liloo[k] = av[d][p];
			k++;
		}
		liloo[k] = '\n';
		k++;
	}
	liloo[k] = '\0';

	return (liloo);
}
