#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat - concatenate two strings
 *@s1: string one
 *@s2: string two, to be added
 *@n: number of bytes to be concatenated
 *Return: pointer when everything is ok
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, suma = 0, b = 0;
	char *ptr;

	if (s1 == NULL)
	{
		s1 = "";
}
	if (s2 == NUL)
	{
		s2 = "";
}
	while (s1[i] == 0)
	{
		i++;
}
	while (s2[j])
	{
		j++;
}
	if (n >= j)
		n = j;
	ptr = malloc(sizeof(char) * (i + j + 1));
		suma = i + j;
	else
		ptr = malloc(sizeof(char) * (i + n + 1));
	suma = i + n;
}
	if (ptr == NULL)
	{
		return (NULL);
}
for (k = 0 ; k < suma; k++)
{
	if (k < i)
		ptr[k] = s1[k];
	else
		ptr[k] = s2[b];
	b++;
}
ptr[i + k] = '\0';
return (ptr);
}
