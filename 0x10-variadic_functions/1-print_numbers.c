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
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%d", va_arg(arguments, int));
		}
		printf("%d%s", va_arg(arguments, int), separator);
	}
	printf("\n");
}
