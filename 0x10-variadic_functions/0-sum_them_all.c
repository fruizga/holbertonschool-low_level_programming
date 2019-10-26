#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all - sum int arguments
 *@n: number of arguments
 *Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list arguments;
	int sum = 0;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arguments, int);
	}

va_end(arguments);

return (sum);
}
