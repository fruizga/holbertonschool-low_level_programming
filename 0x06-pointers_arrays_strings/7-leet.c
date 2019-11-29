#include "holberton.h"
/**
 * *leet - encode a string into 1337 code
 * @str: string
 * Return: translated string
 */

char *leet(char *str)
{
char lt[] = "aeotlAEOTL";
char num[] = "4307143071";
int a = 0;
int b = 0;

	while (str[a] != '\0')
	{
		for (b = 0; b <= 9; b++)
			{
			if (str[a] == lt[b])
			{
			str[a] = num[b];
			}
			}
	a++;
	}
	return (str)
}
