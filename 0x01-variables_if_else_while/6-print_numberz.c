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
	char numberz[10] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(numberz[i]);
	}
	putchar('\n');
	return (0);
}
