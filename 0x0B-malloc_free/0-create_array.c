#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars.
 * @size: size of the array.
 * @c: storaged char
 *
 * Return: pointer of an array of chars initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *ly;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ly = malloc(sizeof(c) * size);

	if (ly == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ly[i] = c;

	return (ly);
}
