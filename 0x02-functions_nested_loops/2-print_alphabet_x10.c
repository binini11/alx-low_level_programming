#include "main.h"
/**
*  * print_alphabet - prints als the alphabet in lowercasein a newline 10x.
*
*  * Return: Always 0 (Success)
*/

void print_alphabet(void)
{
	int i, j;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(abc[i]);
		}
	_putchar('\n');
	}
}
