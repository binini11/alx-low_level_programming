#include "main.h"
/**
*  * _alpha - checks the alphabet or not.
*  * @c: in an character
*  * Return: Always 1 for lower and 0 if not
*/

int _isalpha(int c);
{
	if ((c >= 65 && c <= 90)|| (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
