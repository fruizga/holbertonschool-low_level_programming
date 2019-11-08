#include "holberton.h"
#include <math.h>
/**
 *binary_to_uint - conver binary string to unsigned int
 *@b:string of binary number
 *Return:number as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0, i = 0, j = 0;

	while (b[i] != '\0')
	{
		i++;
	}

	while (b[j] != '\0')
	{
		if (b[j] == '1')
		{
			res = res + pow(2, i - 1);
		}
		i--;
		j++;
	}
	return (res);
}
