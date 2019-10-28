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
unsigned int i;
va_list valist;
char *string;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);
		if (separator != NULL && i != 0)
			printf("%s", separator);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
	}
	va_end(valist);
	printf("\n");
}
