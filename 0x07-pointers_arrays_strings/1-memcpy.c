#include "main.h"

/**
**_memcpy - copis n number of characters frome one string to other.
* @dest: input.
* @src: input.
* @n: inputiss
* Return: constant filld s.
**/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}
	return (dest);
}
