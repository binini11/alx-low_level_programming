#include "main.h"
/**
* largest_number - causes an infinite loop.
* @a: first integer
* @b: second integer
* @c: third integer
* Return: largest number
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a >= b && a >= c)
	{
		largest = a;
	}
	else if (b >= a && b >= c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	printf("%d is the largest number\n", largest);
	return (largest);
}
