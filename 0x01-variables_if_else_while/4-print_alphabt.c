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
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (abc[i] != "q" && abc[i] != "e")
		{
		putchar(abc[i]);
		}
	}
	putchar('\n');
	return (0);
}
