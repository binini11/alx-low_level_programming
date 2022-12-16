#include "main.h"

/**
*_strlen - takes in a string and returns a sting count
*@s: input.
** Return: string count.
*/

int _strlen(char *s)
{
	int i = 0;

	while (*(s + i) != '\0')
	{
		i++;
	}
	return (i);
}
