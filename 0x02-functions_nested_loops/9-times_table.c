#include "holberton.h"

/**
 * times_table - prints time table
 *
 * Description: Prints the 9 times table
 */
void times_table(void)
{
int j, i, k;

k = 0;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
k = i * j;
if (k < 10 && j != 0)
_putchar(' ');
if (k > 9)
{
_putchar((k / 10) + 48);
_putchar((k % 10) + 48);
}
else
_putchar(k + 48);
if (j == 9)
_putchar('\n');
else
{
_putchar(',');
_putchar(' ');
}
}
}
}
