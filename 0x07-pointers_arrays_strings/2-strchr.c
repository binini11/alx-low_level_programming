#include "main.h"

/**
**_strchr -  search for a character in a string.
* @s: input.
* @c: input.
* Return: a pointer to a character to a string if found.
**/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != '\0')
	{
		if (*(s + i) == c)
		{
			return (s + i);
		}
		i++;
	}
	return ('\0');
}
