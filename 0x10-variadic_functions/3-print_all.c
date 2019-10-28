#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_all - prints anykind of parameterg.
 * @format:char
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
va_list valist;
	int i = 0;
	char *s;

	va_start(valist, format);
	while (format && format[i])
	{
		switch (format[i++])
		{
			case 'c':
				printf("%c", va_arg(valist, int));
				break;
			case 'i':
				printf("%i", va_arg(valist, int));
				break;
			case 'f':
				printf("%f", va_arg(valist, double));
				break;
			case 's':
				s = va_arg(valist, char*);
				if (s == NULL)
					s = "(nil)";
				printf("%s", s);
				break;
			default:
				continue;
		}
		if (format[i])
			printf(", ");
	}
	putchar('\n');
	va_end(valist);
}
