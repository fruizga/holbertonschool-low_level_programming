#include "holberton.h"
/**
 * rev_string - function reverse string
 * @s: string as parameter
 */

void rev_string(char *s)
{
int cnt;
int i;
int tmp;

	length = 0;
	while (*s != '\0')
	{
		s++;
		cnt++;
	}
	s = s - cnt;
	cnt--;
	i = 0;
	while (i < cnt)
	{
		tmp = s[i];
		s[i] = s[cnt];
		s[cnt] = tmp;
		i++;
		cnt--;
	}
}
