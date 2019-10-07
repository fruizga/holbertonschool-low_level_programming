#include "holberton.h"
/**
 * puts_half - print last half of string
 * @str: string as param
 */

void puts_half(char *str)
{
	int cnt;

	cnt = 0;
	while (*str != '\0')
	{
		str++;
		cnt++;
	}
	if (cnt % 2 != 0)
		cnt = (cnt - 1) / 2;
	else
		cnt =  / 2;
	str = str - cnt;
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
		cnt++;
	}
	_putchar('\n');
}
