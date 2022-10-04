#include "main.h"
#include <stdlib.h>

/**
 *create_array - creates an arry of characters
 * @size: input
 * @c: input
 * Return: a pinter to array or NULL if it fails
 **/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char b;

	if (size == 0)
		return (NULL);
	b = malloc(sizeof(c) * size);
	if (b == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		b[i] = c;
	return (b);
}
