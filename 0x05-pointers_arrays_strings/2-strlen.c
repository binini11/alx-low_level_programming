#include "main.h"

/**
*_strlen - count string length
* @s: input.
* Return: count
*/

int _strlen(char *s)
{
	int count = 0;

	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}
