#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
/**
 *malloc_checked - main function
 *@b:param
 *Return: exit code
 */
void *malloc_checked(unsigned int b)
{
int *a;

a = malloc(b);

	if (a == NULL || b == INT_MAX)
	{
		exit(98);
}

		return (a);

}
