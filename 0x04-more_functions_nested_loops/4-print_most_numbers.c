#include "holberton.h"
/**
 *print_most_numbers  - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_most_numbers(void)
{
int num;
for (num = 48; num <= 57; num++)
{
if (num == 50 || num == 52)
{}
else
{
_putchar(num);
}
}
_putchar('\n');
}
