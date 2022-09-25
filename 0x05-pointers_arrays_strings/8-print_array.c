#include "main.h"
#include <stdio.h>

/**
*print_array - prints a string line by line
*@a: input.
*@n: input.
*Return: 0 success
*/

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", *(a + i));
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
