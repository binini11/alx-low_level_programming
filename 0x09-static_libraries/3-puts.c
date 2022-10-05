#include "main.h"

/**
*_puts - prints a string foolowed b a new line
* @str: input.
* Return: 0 success
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
