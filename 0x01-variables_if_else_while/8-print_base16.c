#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*  * main - printsabc in lowercasefirst and the in uppercase.
*
*  * Return: Always 0 (Success)
*/
int main(void)
{
	char hexa[16] = "0123456789abcdef";
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar(hexa[i]);
	}
	putchar('\n');
	return (0);
}
