#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns apinter to anewly allocated memory space
 * @str: input
 * Return: a pinter
**/

char *_strdup(char *str)
{
	unsigned int i, j;
	char *b;

	if (str == 0)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	b = (char *)malloc(sizeof(char) * (i + 1));

	if (b == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		b[i] = str[j];

	return (b);
}
