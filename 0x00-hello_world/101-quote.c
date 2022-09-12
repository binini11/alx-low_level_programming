#include<stdio.h>
/**
*main -prints the text string as is
*
*Return: Always 1 (Success)
*/
int main(void)
{
	char test[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int i;

	for (i = 0; i < 59; i++)
	{
		putchar(test[i]);
	}
	return (1);
}

