#include <stdio.h>
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: unsigned number
 * @index: position to get the bit
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8))
	{return (-1); }
	n = n >> index;
	return (n & 1);
}
