#include "holberton.h"
/**
 * flip_bits - returns the number of bits
 * @n: first number
 * @m: second number
 * Return: countert
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned long int fxor = n ^ m;
unsigned int cnt = 0;
while (fxor)
{
if ((fxor & 1) == 1)
{
fxor++;
}
fxor >>= 1;
}
return (fxor);
}
