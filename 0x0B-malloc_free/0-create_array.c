#include "holberton.h"
#include <stdlib.h>
/**
 * create_array - create an array
 * @size: size
 * @c: Char
 * Return: an Char
 */
char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	else
	{

		char *p = malloc(sizeof(char) * size);
		while (size--)
		{
			p[size] = c;
		}
		return (p);
	}
	return (NULL);
}
