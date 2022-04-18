#include "main.h"

/**
 * print_rev - a function that prints a string, in reverse
 * f is to first count to end, n is to count back
 * @c: str input
 * Return: string in reverse
 */
void print_rev(char *c)
{
	int f = 0;
	int i, n;

	for (i = 0; c[i] != '\0'; i++)
	{
		f++;
	}

	for (n = (f - 1); n >= 0; n--)
	{
		_putchar(c[n]);
	}
	_putchar('\n');
}
