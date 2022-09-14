#include <main.h>
#include <stdio.h>

/**
*  * main - number is positive, negative or zero.
*
*  * Return: Always 0 (Success)
*/
int main(void)
{
	int i, character[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i < 8; i++)
	{
	putchar(character[i]);
	}
	putchar('\n');
	return (0);
}
