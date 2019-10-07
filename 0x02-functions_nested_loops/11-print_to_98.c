#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: parameter
 */

void print_to_98(int n)
{
	int v;

	v = n;

	if (v == 98)
		printf("%d", v);

	else
	{
	for (v = n; v > 97; v--)
	{
		if (v > 97)
			printf("%d", v);
		if (v != 98)
			printf(", ");
	}
	for (v = n; v < 99; v++)
	{
		if (v < 99)
			printf("%d", v);
		if (v != 98)
			printf(", ");
	}
	}
	printf("\n");
}
