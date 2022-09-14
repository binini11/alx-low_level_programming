#include "main.h"
/**
*  * print_alphabet - prints als the alphabet in lowercaseg.
*
*  * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	int i;
	char abc[26] = "abcdefghijklmnopqrstuvwxyz";

	for (i = 0; i < 26; i++)
	{
		_putchar(abc[i]);
	}
	_putchar('\n');
}
