#include "holberton.h"

/**
 * print_square - print square
 *Description: Print square
 *@size: draw the square
 *
 */
void print_square(int size)
{
int i, j;
if (size <= 0)
{
_putchar('\n');
}
for (i = 0; i < size; i++)
{
for (j = 0; j < size; j++)
{
_putchar(35);

}
_putchar('\n');
}
}
