#include <main.h>
#include <stdio.h>

/**
*  * main - prints the _putchar string.
*
*  * Return: Always 0 (Success)
*/
int main(void)
{
	int i, _putchar[8] = {95, 112, 117, 116, 99, 104, 97, 114};

	for (i = 0; i < 8; i++)
	{
	putchar(_putchar[i]);
	}
	putchar('\n');
	return (0);
}
