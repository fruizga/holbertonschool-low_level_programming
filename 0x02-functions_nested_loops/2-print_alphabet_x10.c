#include "holberton.h"

/**
 *print_alphabet_x10 -  use putchar and nested loop
 *
 *Description: Print the alphabet for 10 times
 */
void print_alphabet_x10(void)
{
int lt, cnt;
for (cnt = 0; cnt < 10; cnt++)
{
for (lt = 'a'; lt <= 'z'; lt++)
{
_putchar(lt);
}
_putchar('\n');
}
}
