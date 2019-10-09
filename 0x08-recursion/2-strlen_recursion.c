#include "holberton.h"
/**
 * _strlen_recursion - return string length
 *@s: string to analyze
 *Return: length
 */
int _strlen_recursion(char *s)
{
	int cnt = 0;

	if (*s)
{
		cnt++;
		return (cnt + _strlen_recursion(s + 1));
	}
	else
	{
	return (0);
	}
}
