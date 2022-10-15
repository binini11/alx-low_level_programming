#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatinates two strings
 * @s1: string input
 * @s2: string input
 * @n: number of bytes
 *
 * Return: pinter to the allocated memory
 * if fails process terminates
 * with NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, b, k;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;
	if (n > j)
		n = j;
	b = i + n;

	ptr = malloc(b + 1);

	if (ptr == NULL)
		return (NULL);

	for (k = 0; k < b; k++)
		if (k < i)
			ptr[k] = s1[k];
		else
			ptr[k] = s2[k - i];
	ptr[k] = '\0';
	return (ptr);
}
