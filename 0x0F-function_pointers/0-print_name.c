#include "function_pointers.h"

/**
 * print_name - prints a name.
 * @name: input name.
 * @ptr: function pointer.
 *
 * Return: no return.
 */

void print_name(char *name, void (*ptr)(char *))
{
	if (name && ptr)
		ptr(name);

}
