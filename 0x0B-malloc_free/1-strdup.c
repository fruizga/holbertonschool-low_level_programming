#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strdup - Main function
 *@str: string as parameter
 *Description: returns a pointer to a newly allocated space in memory
 *Return: Something
*/
char *_strdup(char *str)
{
int i, j;
char *dup;

if (str == NULL)
{
	return (NULL);
}
for (i = 0; str[i]; i++)
{
	;
}
dup = malloc(sizeof(char) * i);
if (dup == NULL)
{
return (NULL);
}
for (j = 0; j < i; j++)
{
dup[j] = str[j];
}
return (dup);
}
