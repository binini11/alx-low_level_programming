#include "main.h"

/**
*_strpbrk -  search for a character in a string.
* @s: input.
* @accept: input.
* Return: a pointer to a character to a string if found.
**/

char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0, j = 0;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				return (accepted + j);
			}
			j++;
		}
		i++;
	}
	if (*(s + i) == *(accepted + j))
		return (accepted + j);
	return ('\0');
}
