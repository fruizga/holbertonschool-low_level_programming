#include <stdio.h>
#include "function_pointers.h"
/**
 *int_index - Search for an integer
 *@array:array
 *@size:length
 *@cmp: function pointer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}
	if (cmp != NULL && array != NULL)
	{
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	}
	return (-1);
}
