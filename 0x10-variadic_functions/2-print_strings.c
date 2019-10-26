#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_strings - prirn numbers separated by char
 *@separator: char between number
 *@n: number of arguments
 *Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arguments;
	unsigned int i;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
	{
		if (separator == NULL)
		{
			printf("%s",str_arg(arguments, char));
		}
		printf("%s%s", str_arg(arguments, char), separator);
	}
	printf("\n");
}
