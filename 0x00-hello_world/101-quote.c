#include<stdio.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int i;
	char test[54] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	
	for(i = 0; i < 54; i++)
	{
		putchar(test[i]);
	}
	return (0);
}

