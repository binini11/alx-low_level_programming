#include "main.h"
#include <stdio.h>
/**
*string_toupper -changes lower case into uppercase
* @s: input.
*
* Return: uppercase string s
*/

char *string_toupper(char *s)
{
	int i;

	i = 0;

	while (*(s + i) != '\0')
	{
		if ((*(s + i) >= 97) && (*(s + i) <= 122))
		{
			*(s + i) = *(s + i) - 32;
		}
		i++;
	}
	return (dest);
}
