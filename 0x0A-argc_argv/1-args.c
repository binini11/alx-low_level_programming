#include <stdio.h>

/**
**main - prints nnumber of arguments passed
* @argc: input
* @argv: input.
* Return: 0 on success.
**/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
