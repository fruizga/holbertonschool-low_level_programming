#include "holberton.h"

/**
 *print_alphabet -  use putchar
 *
 *Description: Print the alphabet
 */
void print_alphabet(void)
{
int lt;
for (lt = 'a'; lt <= 'z'; lt++)
{
_putchar(lt);
}
_putchar('\n');
}
