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
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf(" FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf(" Fizz");
		}
		else if (n % 5 == 0)
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
