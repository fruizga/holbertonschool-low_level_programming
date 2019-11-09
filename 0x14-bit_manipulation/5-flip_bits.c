#include "holberton.h"
/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: counter if everything is ok
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int fxor = n ^ m;
unsigned int cnt = 0;
while (fxor)
{
if ((fxor & 1) == 1)
{
cnt++;
}
fxor >>= 1;
}
return (cnt);
}
