#include "main.h"
#include <stdio.h>
/**
*  * print_alphabet - prints als the alphabet in lowercaseg.
*
*  * Return: Always 0 (Success)
*/
int print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
