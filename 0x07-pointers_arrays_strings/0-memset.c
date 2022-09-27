#include "main.h"

/**
**_memset - fills a memory with a constant.
* @s: input.
* @b: input.
* @n: inputiss
* Return: constant filld s.
**/

char *_memset(char *s, char b, unsigned int n);
{
	unsigned int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
