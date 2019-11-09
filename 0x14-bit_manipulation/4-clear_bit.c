#include "holberton.h"
#include <stdio.h>
/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: number
* @index: index position of bit
*Return: 1 if everything is ok
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n & (~(1 << index));
	return (1);
}
