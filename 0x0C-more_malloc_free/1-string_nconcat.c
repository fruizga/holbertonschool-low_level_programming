#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
*string_nconcat - concatenates two string
*@s1: string 1
*@s2: string 2
*@n: number of bytes to concatenate
*Return: pointer to char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
unsigned int i = 0, j = 0, a = 0, b = 0;
if (s1 == NULL)
	s1 = "";
if (s2 == NULL)
	s2 = "";
while (s1[i])
	i++;
while (s2[j])
	j++;
if (n >= j)
{
	n = j;
ptr = malloc(sizeof(char) * (i + j + 1));
}
else
{
	ptr = malloc(sizeof(char) * (n + i + 1));
}
if (ptr == NULL)
	return (NULL);
for (a = 0; a < i; a++)
{
	ptr[a] = s1[a];
}
for (b = 0; b < n; b++)
{
	ptr[a++] = s2[b];
}
ptr[a++] = '\0';
return (ptr);
}
