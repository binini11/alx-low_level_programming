#include "main.h"
#include <stdlib.h>

/**
 * _calloc - alocates space in memory for an array
 * @nmemb: number of elements
 * @size: size in bytes
 *
 * Return: pinter to the allocated memory
 * if nmemb  it size is 0 return with NULL
 * if malloc fails return with NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size); i++)
		ptr[i] = 0
	return (ptr);
}
