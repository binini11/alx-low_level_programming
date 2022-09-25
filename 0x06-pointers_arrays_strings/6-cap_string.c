#include "main.h"
#include <stdio.h>
/**
*cap_string - changes all words of a string in to capital letter.
* @s: input.
*
* Return: pointer.
*/

char *cap_string(char *s)
{
	int i, j;

	int separater = {125, 123, 41, 40, 46, 34, 33, 44, 59, 63, 10, 9, 32};

	i = 0;

	if (*(s + i) >= 97 && *(s + i) <= 122)
	{
		*(s + i) = *(s - j) - 32;
	}
	i++;
	while (*(s + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(s + i) == separater[j])
			{
				if ((*(s + (i + 1)) >= 97) && (*(s + (i + 1)) <= 122))
				{
					*(s + (i + 1)) = *(s + (i + 1)) - 32;
				}
				break;
			}
		}
		i++;
	}
	return (s);
}
