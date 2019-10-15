#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: Print the first 50 numbers in the Fibonacci sequence
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	long a;
	long b;
	long c;

	a = 1;
	b = 2;
	printf("%lu, %lu", a, b);
	for (i = 0; i <= 47; i++)
	{
		c = a + b;
		a = b;
		b = c;
		printf(", %lu", c);
	}
	printf("\n");
	return (0);
}
