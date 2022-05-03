#include "main.h"

/**
 * _puts - a function that prints a string
 * @c: string input
 * Return: string
 */
void _puts(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		_putchar(c[i]);
	}
	_putchar('\n');
}
