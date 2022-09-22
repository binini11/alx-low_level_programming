#include "main.h"
#include <stdio.h>
/**
*_strcat -it takes in avalue and updates it
* @dest: input.
* @src: input
*
* Return: councatinated string dest
**/

char *_strcat(char *dest, char *src)
{
	int i, j;

	while (*(dest + i) != '\0')
	{
		i++;
	}
	while (j >= 0)
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
