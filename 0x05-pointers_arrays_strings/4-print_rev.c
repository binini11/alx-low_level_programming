#include "main.h"

/**
*print_rev - prints a string foolowed b a new line
* @s: input.
* Return: 0 success
*/

void print_rev(char *s)
{
	int count = 0;

	while (count >= '\0')
	{
		if (s[count] == '\0')
			_putchar('\n');
		break;
		for (count--; count >= 0; count--)
			_putchar(s[count]);
		count++;
	}
}
