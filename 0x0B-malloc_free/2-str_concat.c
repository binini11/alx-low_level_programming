#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatinates tow strings
 * @s1: input
 * @s2: input
 * Return: concatinated string
**/

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, k, limit;
	char *b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 0; s1[i] != '\0'; i++)
		;

	for (j = 0; s2[j] != '\0'; j++)
		;


	b = malloc(sizeof(char) * (i + j + 1));

	if (b == NULL)
	{
		free(b);
		return (NULL);
	}

	for (k = 0; k <= i; k++)
		b[k] = s1[k];

	limit = j;

	for (j = 0; j <= limit; k++, J++)
		b[k] = s2[j];

	return (b);
}
