#include "main.h"

/**
* print_square - print squre
* @size: size of the squre
* Return:noting
*/

void print_square(int size)
{
	int i, j;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			_putchar(35);
		}
	_putchar('\n');
	}
}
