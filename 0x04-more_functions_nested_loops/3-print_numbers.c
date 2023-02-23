#include "main.h"

/**
 * print_number - print 0123456789
 * owned by Tebogo Themba
 * Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
