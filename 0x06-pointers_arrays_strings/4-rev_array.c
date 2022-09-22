#include "main.h"
#include <stdio.h>
/**
*reverse_array - a string and reverse it
* @a: input.
* @n: input.
*
*
* Return: copied string dest
**/

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			temp = *(a + j);
			*(a + j) = *(a + (j - 1));
			*(a - (j - 1)) = temp;
		}
	}
}
