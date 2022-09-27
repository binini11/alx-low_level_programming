#include "main.h"

/**
**_memset - fills a memory with a constant.
* @s: input.
* @b: input.
* @n: input.
* Return: constant filld s.
**/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}
