#include <stdio.h>
#include <stdlib.h>

/**
**main - prints the sum of the arguments.
* @argc: input.
* @argv: input.
* Return: 1 on error and 0 on success
**/

int main(int argc, char *argv[])
{
	int i, j, sum;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum = sum + atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
