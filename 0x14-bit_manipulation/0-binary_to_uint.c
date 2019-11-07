#include "holberton.h"
/**
 *binary_to_uint - conver binary string to unsigned int
 *@b:string of binary number
 *Return:number as unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int res = 0, base2 = 1, i = 0;

	while (b[i] != '\0' && i < 32)
	{
		if (b[i] == '1')
		{
			res = res + base2;
		}
		else{
			
		}
		base2 = base2 * 2;
		i++;
	}
	return (res);
}
