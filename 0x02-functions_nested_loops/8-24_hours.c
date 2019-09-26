#include "holberton.h"

/**
 * jack_bauer - send input to main function
 *
 * Description: print every minute of the day
 */
void jack_bauer(void)
{
  int i, j;

for (i = 0; i <= 23; i++)
{
for (j = 0; j <= 59; j++)
{
_putchar((i / 10) + 48);
_putchar((i % 10) + 48);
_putchar(':');
_putchar((j / 10) + 48);
_putchar((j % 10) + 48);
if (a == 23 && b == 59)
{
break;
}
_putchar('\n');
}
}
_putchar('\n');
}
