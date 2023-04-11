#include <stdlib.h>
#include "main.h"
/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars 0
 */
char *_strdup(char *str)
{
	char *strout;
	unsigned int d, p;

	if (str == NULL)
		return (NULL);

	for (d = 0; str[d] != '\0'; d++)
		;

	strout = (char *)malloc(sizeof(char) * (d + 1));

	if (strout == NULL)
		return (NULL);

	for (p = 0; p <= d; p++)
		strout[p] = str[p];

	return (strout);
}
