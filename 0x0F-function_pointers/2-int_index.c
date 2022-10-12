#include "function_pointers.h"

/**
 * int_index -searchen an integer
 * @array: input narray integer.
 * @size: size of the array.
 * @cmp: pointer to the function to be used to compre.
 *
 * Return: index of the first element fot which
 * the cmp function does not return 0.
 * if no elements matches. return -1. if size
 * <= 0, return -1.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (1);
	}
	return (-1);
}
