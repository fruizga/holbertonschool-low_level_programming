#include "holberton.h"

/**
 * print_line - print line some times
 *Description: Print line
 *@n: Times to draw the line
 *
 */
void print_line(int n)
{
int i;
for (i = 0; i <= n; i++)
{
_putchar(95);
}
_putchar('\n');
}
