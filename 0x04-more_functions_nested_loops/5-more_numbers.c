#include "main.h"

/**
 * print_most_numbers - prints
 *
 * Return: void
 */


void more_numbers(void)
{
	char c;
	char d;

	for (d = '0'; d < '10'; d++)
	{
		for (c = '0'; c <= '14'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
