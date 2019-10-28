#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - prin numbers separated by char
 *@separator: char between number
 *@n: number of arguments
 *Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list valist;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(valist, int);
		printf("%d", num);
		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}
	va_end(valist);
	printf("\n");
}
