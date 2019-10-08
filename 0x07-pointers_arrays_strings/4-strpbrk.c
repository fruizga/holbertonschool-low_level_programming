#include "holberton.h"
/**
 * _strpbrk - changes the pointer
 *@s: string to analyze
 *@accept: pattern to find in s
 * Return: new pointer
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ',')
		{
			break;
}
		else
{
for (j = 0; accept[j]; j++)
{
if (s[i] == accept[j] && s[i] != ',')
{
	s = s + i;
}
}
}
}
return (s);
}
