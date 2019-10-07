#include "holberton.h"

/**
 * string_toupper - takes in string from main
 * @s: pointer to string
 * Description: takes a string and changes all the lowercase to uppercase
 * Return: updated string.
 */
char *string_toupper(char *s)
{
	int cnt;

	for (cnt = 0; s[cnt] != '\0'; cnt++)
	{
		if (s[cnt] >= 'a' && s[cnt] <= 'z')
		{
			s[cnt] -= 32;
		}
	}
	return (s);
}
