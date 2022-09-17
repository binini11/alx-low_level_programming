#include <stdio.h>

/**
* main - print  buzz
* Return: 0 success
*/

int main(void)
{
	int i;
	
	i = 1;

	printf("%d", i);
	for (i = 2; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (i % 5 == 0)
		{
			printf(" Buzz");
		}
		else
		{
			printf(" %d", n);
		}
		printf("\n");
		return (0);
	}
}
