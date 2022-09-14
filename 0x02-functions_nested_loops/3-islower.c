#include "main.h"
/**
*  * _islower - checks the alphabet list whether it is  lower case or not.
*  * @c: in an character
*  * Return: Always 1 for lower and 0 if not
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
