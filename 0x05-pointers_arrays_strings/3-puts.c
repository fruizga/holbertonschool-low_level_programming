#include "holberton.h"
/**
 * _puts - prints a string
 *Description: prits all characters of a string
 *@str: pointer as param
 *
 */
void _puts(char *str)
{
int i;
for (i = 0; str[i]; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
