#include "main.h"

/**
* _isdigit - checks if a parameter is digit or not
* @c: input.
* Return: 1 if uppercase, 0 if not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
