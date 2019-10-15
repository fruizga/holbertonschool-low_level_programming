#include "holberton.h"
#include <stdio.h>

/**
 * main - entry point
 * Description: print the sum of multiples of 3 and 5
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	int b;

	b = 0;
	for (a = 0; a < 1024; a++)
	{
		if ((a % 3 == 0) || (a % 5 == 0))
			b = b + a;
	}
	printf("%d\n", b);
	return (0);
}
