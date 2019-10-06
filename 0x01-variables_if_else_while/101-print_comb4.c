#include <stdio.h>
/**
 * main - Entry point
 * Description: Print all unique combos of 3 numbers
 * Return: Always 0 (Success)
 */
int main(void)
{
int g, h, i;

for (g = '0'; g <= '9'; g++)
{
for (h = '0'; h <= '9'; h++)
{
for (i = '0'; i <= '9'; i++)
{
if (g < h && h < i)
{
putchar(g);
putchar(h);
putchar(i);
if (g == '7' && h == '8' && i == '9')
{
;
}
else
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}
