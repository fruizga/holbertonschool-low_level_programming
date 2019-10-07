#include "holberton.h"
/**
 * print_last_digit - function that prints last digit of number
 * @n: the value that will be tested
 * Return: function returns the absolute value of the digit
 */
int print_last_digit(int n)
{
int dgt;
dgt = n % 10;

if (dgt < 0)
dgt = -dgt;
_putchar(dgt + '0');
return (dgt);
}
