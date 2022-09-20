#include "main.h"
#include <unistd.h>

/**
*  * _putchar - dipllad to screen the valu of c.
*  * @c: is a character
*  * Return: Always 0 (Success)
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}
