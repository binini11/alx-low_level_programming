#include<stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	char test[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < 54; i++)
	{
		putchar(test[i]);
	}
	return (0);
}

