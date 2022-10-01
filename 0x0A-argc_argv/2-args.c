#include <stdio.h>

/**
**main - prints all the arguments it recieves
* @argc: input
* @argv: input.
* Return: 0 on success.
**/

int main(int argc, char *argv[])
{
	int ar;

	for (ar = 0; ar < argc; ar++)
	{
		printf("%s\n", argv[ar]);
	}
	return (0);
}
