#include "holberton.h"

/**
 * leet - takes in a string and changes it.
 * @str: string given by main
 * Description: Encodes a string into 1337.
 * Return: str
 */
char *leet(char *str)
{
	int cnt;
	int i;
	char a[] = "4433007711";
	char b[] = "aAeEoOtTlL";

	count = 0;
	while (str[cnt] != '\0')
	{
		i = 0;
		while (b[i] != '\0')
		{
			if (str[cnt] == b[i])
				str[cnt] = a[i];
			i++;
		}
		cnt++;
	}
	return (str);
}
