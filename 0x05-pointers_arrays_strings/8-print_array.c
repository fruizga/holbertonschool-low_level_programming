#include "holberton.h"
#include <stdio.h>
/**
 * print_array - print a given number of element's array of ints
 * @a: pointer to array
 * @n: number of elements
 */

void print_array(int *a, int n)
{
	int i;

	*a = a[0];

	i = 0;
	while (i < n)
	{
		printf("%d", a[i++]);
		if (i != n)
			printf(", ");
	}
	printf("\n");
}
