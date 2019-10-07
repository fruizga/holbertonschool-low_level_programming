#include "holberton.h"
/**
 * *leet - encode a string into 1337 code
 * @str: string
 * Return: translated string
 */

char *leet(char *str)
{
	int i;
	int cnt;
	char a[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char b[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	index = 0;
	while (str[i] != '\0')
	{
		cnt = 0;
		while (a[cnt] != '\0')
		{
			if (let[cnt] == str[i])
				str[i] = b[cnt];
			cnt++;
		}
		i++;
	}
	return (str);
}
