#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals
 * @a: represents array to be searched
 * @size: size of array square
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 = sum1 + *a;
			if (j == size - i - 1)
				sum2 = sum2 + *a;
		a++;
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
