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
	int x = 0;
	char *MyArr;

	va_start(valist, format);

	while (format[x] != '\0')
	{
		switch (format[x])
		{
		case 'c':
			printf("%c", va_arg(valist, int));
			break;
		case 'i':
			printf("%d", va_arg(valist, int));
			break;
		case 'f':
			printf("%f", va_arg(valist, double));
			break;
		case 's':
			MyArr = va_arg(valist, char*);
			if (MyArr != NULL)
			{
				printf("%s", MyArr);
				break;
			}
			{printf("(nil)"); }
			break;
		}
		if (format[(x + 1)] != '\0' && (format[x] == 'c' ||
		format[x] == 'i' || format[x] == 'f' || format[x] == 's'))
		{printf(", "); }
		x++;
	}
	printf("\n");
	va_end(valist);
}
