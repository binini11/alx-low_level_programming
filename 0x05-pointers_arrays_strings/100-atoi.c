#include "main.h"

/**
*swap_int - takes in two int and swaps their value
* @a: input.
* @b: input
* * Return: 0.
*/

void swap_int(int *a, int *b)
{
	int bb;

	bb = *b;
	*b = *a;
	*a = bb;
}
