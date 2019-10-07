#include "holberton.h"
#include <stdio.h>

/**
 * _memset - prints first n bytes of buffer
 * @b: char to print
 * @n: the size of the memory to print
 *@s: string to replace
 * Return: Nothing.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
}
	return (s);
}
