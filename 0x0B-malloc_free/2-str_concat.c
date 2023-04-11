#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars 0
 */
char *str_concat(char *ly1, char *ly2)
{
	char *layla;
	unsigned int d, p, f, limit;

	if (ly1 == NULL)
		ly1 = "";
	if (ly2 == NULL)
		ly2 = "";

	for (d = 0; ly1[d] != '\0'; d++)
		;

	for (p = 0; ly2[p] != '\0'; p++)
		;

	layla = malloc(sizeof(char) * (d + p + 1));

	if (layla == NULL)
	{
		free(layla);
		return (NULL);
	}

	for (f = 0; f < d; f++)
		layla[f] = ly1[f];

	limit = p;
	for (p = 0; p <= limit; f++, f++)
		layla[f] = ly2[p];

	return (layla);
}
