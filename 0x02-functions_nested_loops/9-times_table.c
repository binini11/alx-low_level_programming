#include "main.h"
/**
*  *times_table - prints the lst didgit of a number.
*
*
*  * Return: reterns laast digit
*/

void times_table(void)
{
	int a, b, m;

	for (a = 0; a <= 9; a++)
	{
		_putchar(48);
		for (b = 1; b <= 9; b++)
		{
			m = a * b;
			_putchar(44);
			_putchar(32);
			if (m <= 9)
			{
				_putchar(32);
				_putchar(m + 48);
			}
			else
			{
				_putchar((m / 10) + 48);
				_putchar((m % 10) + 48);
			}
		}
	}
}
