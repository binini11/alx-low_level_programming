#include "main.h"
#include <stdio.h>
/**
**_strncpy - a string and copies it
* @dest: input.
* @src: input.
* @n: input
*
* Return: copied string dest
**/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
