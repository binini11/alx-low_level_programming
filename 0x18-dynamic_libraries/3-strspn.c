#include "main.h"

/**
* _strspn -  calculates the prifixign substring.
* @s: input.
* @accept: input.
* Return: int.
**/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0, j = 0, b = 1;

	while (*(s + i) != '\0')
	{
		while (*(accept + j) != '\0')
		{
			if (*(s + i) == *(accept + j))
			{
				b = 0;
				break;
			}
			j++;
		}
		i++;
		if (b == 1)
			break;
	}
	return (i);
}
