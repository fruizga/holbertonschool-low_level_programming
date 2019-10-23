#include <stdio.h>
#include "function_pointers.h"
/**
 *array_iterator - call many functions
 *@array: array of numbers
 *@size: array length
 *@action: function to operate array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array != NULL && size > 0 && action != NULL)
	{
	while (i < size)
	{
		action(array[i]);
			i++;
	}
	}
}
