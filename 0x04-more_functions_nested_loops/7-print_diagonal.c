#include "holberton.h"

/**
 * print_diagonal - print diagonal some times
 *Description: Print diagonal + end line
 *@n: Times to draw the line
 *
 */
void print_diagonal(int n)
{
int i, j, k;
if (n <= 0)
{
_putchar('\n');
}
for (i = 1; i <= n; i++)
{
k = i - 1;
for (j = 1; j <= k; j++)
{
_putchar(32);
}
_putchar(92);
_putchar('\n');
}
}
