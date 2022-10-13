#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
* sum_them_all - a fun returns the sum of all its parameters
* @n: number of arguments
* Return: sum of arguments
**/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum;
	va_list params;

	if (n == 0)
		return (0);
	va_start(params, n);
	sum  = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(params, int);
	va_end(params);
	return (sum);
}
