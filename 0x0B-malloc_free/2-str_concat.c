#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars 0
 */
char *str_concat(char *s1, char *s2)
{
	char *liloo;
	unsigned int d, p, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (d = 0; s1[d] != '\0'; d++)
		;

	for (p = 0; s2[p] != '\0'; p++)
		;

	liloo = malloc(sizeof(char) * (d + p + 1));

	if (liloo == NULL)
	{
		free(liloo);
		return (NULL);
	}

	for (k = 0; k < d; k++)
		liloo[k] = s1[k];

	limit = p;
	for (p = 0; p <= limit; k++, p++)
		liloo[k] = s2[p];

	return (liloo);
}
