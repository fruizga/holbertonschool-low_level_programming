#include "holberton.h"
/**
 *print_triangle - triangle
 *@size: length
 */
void print_triangle(int size)
{
int i, j, k, size2;
if (size <= 0)
{
_putchar ('\n');
}
for (i = 1; i <= size; i++)
{
size2 = size - i;
for (j = 1; j <= size2; j++)
{
_putchar(' ');
}
for (k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}
