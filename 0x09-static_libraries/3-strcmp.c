#include "main.h"
#include <stdio.h>
/**
* _strcmp - takes in two strings and compares them a string and copies it
* @s2: input.
* @s1: input.
*
*
* Return: copied string dest
**/

int _strcmp(char *s1, char *s2)
{
	int compare, i;

	while (compare == 0)
	{
	if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
	{
		break;
	}
		compare  = *(s1 + i) - *(s2 + i);
		i++;

	}
	return (compare);
}
