#include "main.h"
/**
*  *print_to_98 - prints fron n to 98.
*  * @n: in integeri
*
*  * Return: n to 98
*/

void print_to_98(int n)
{
	if (n > 98)
	{
		for (; n > 98; n--)
		{
			_putchar(n);
		}
	}
	else if (n < 98)
	{
		for (; < 98; n++)
		{
		_putchar(n);
		}
	}
	_putchar('\n');
}
