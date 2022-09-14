#include "main.h"
/**
*  * print_alphabet_x10 - prints als the alphabet in lowercasein a newline 10x.
*
*  * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, j;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(abc[i]);
		}
	_putchar('\n');
	}
}
