#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterartor - call many functions
 *@array: array of numbers
 *@size: array length
 *@action: function to operate array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;
	
	while (i < size)
	{
		action(array[i]);
			i++;
	}
}
