#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;
	va_start(x, n);
	int sum = 0;
	int i;
	if(n==0)
		return (0);
	for(i=0; i<n;i++)
	{
		sum+=va_arg(x, unsigned int);
	}
	va_end(x);
	return (sum);
}
