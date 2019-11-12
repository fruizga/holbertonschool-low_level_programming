#include "holberton.h"
#include <stdio.h>
/**
* set_bit - sets a value to a bit 1
* @n: number
* @index: index position to set
* Return: 1 if everything is ok.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
