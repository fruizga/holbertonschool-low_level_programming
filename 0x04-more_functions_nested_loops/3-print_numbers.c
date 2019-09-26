#include "holberton.h"
#include <stdio.h>
/**
 * print_numbers - print numbers + nuw line
 *Description: Print umbers since 0 still 9
 *
 *
 */
void print_numbers(void)
{
int num;
for (num = 48; num <= 57; num++)
{
_putchar(num);
}
_putchar('\n');

}
