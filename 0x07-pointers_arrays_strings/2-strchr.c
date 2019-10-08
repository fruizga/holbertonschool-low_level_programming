#include "holberton.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string
 *@s: string
 *@c: character to find
 *Return: matches
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			s = s + i;
			return (s);
}
		i++;
}
	return ('\0');
}
