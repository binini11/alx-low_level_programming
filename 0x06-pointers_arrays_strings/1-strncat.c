#include "main.h"
#include <stdio.h>
/**
**_strncat - a concatinates a string.
* @dest: input.
* @src: input.
* @n: input
*
* Return: concatinated string dest
**/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j < n)
	{
		*(dest + i) = *(src + j);
		if (*(src + j) == '\0')
		{
			break;
		}
		i++;
		j++;
	}
	return (dest);
}
