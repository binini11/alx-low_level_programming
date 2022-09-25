#include "main.h"

/**
*_strlen - takes in a string and returns a sting count
*@s: input.
** Return: string count.
*/

int _strlen(char *s)
{
	int count;

	while (*s != '\0')
	{
		count++;
	}
	return (count);
}
