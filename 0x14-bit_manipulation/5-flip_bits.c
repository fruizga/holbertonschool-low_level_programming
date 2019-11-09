#include "holberton.h"
/**
 * flip_bits - returns the number of bits you would need to flip to get from one 
 * @n:long int
 * @m:long int
 * Return:1 if everything is ok.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i = 0;
	unsigned long int  cntr;

	ctnr = n ^ m;
	while (ctnr)
	{
		if ((ctnr & 1) == 1)
		{i++; }
		ctnr = ctnr >> 1;
	}
	return (i);
}
