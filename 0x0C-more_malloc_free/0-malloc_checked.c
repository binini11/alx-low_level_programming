#include "main.h"
#include <stdlib.h>

/**
 * void *malloc_checked - allocates a memorry
 * @b: size to be assigned
 *
 * Return: pinter to the allocated memory
 * if fails process terminates
 * with a status value of 98
 */

void *malloc_checked(unsigned int b)
{
	char *p;

	p = malloc(b);
	if (p == NULL)
		exit(98);
	return (p);
}
