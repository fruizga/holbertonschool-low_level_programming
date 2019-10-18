#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*_calloc - allocates memory for an array
*@nmemb: array of nmemb
*@size: elements of size bytes each
*Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
char *ptr;
unsigned int i = 0;
if (nmemb == 0 || size == 0)
{
	return (NULL);
}
ptr = malloc(nmemb * size);
if (ptr == NULL)
{
	return (NULL);
}
for (i = 0; i < (nmemb * size); i++)
{
ptr[i] = 0;
}
return (ptr);
}
