#include <stdio.h>
#include <stdlib.h>
/**
**main - prints multiplication of the input
* @argc: input
* @argv: input.
* Return: 1 on error and o on success
**/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]);
	return (0);
}
