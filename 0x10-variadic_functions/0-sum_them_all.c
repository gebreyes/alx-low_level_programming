#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - return the sum of a & b
 * @n: number of args
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list x;

	int sum = 0;

	unsigned int i;

	va_start(x, n);

	if(n==0)
		return (0);

	/*va_start(x, n);*/
	for(i=0; i<n; i++)
	{
		sum+=va_arg(x, int);
	}
	va_end(x);
	return (sum);
}