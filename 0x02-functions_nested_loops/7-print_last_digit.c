#include "main.h"
/**
*  *print_last_digit - prints the lst didgit of a number.
*  *@i: is an integer
*
*  * Return: reterns laast digit
*/

int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		return (-l);
	}
	else
	{
		_putchar(l + 48);
		return (l);
	}
}
