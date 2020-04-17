#include "search_algos.h"
/**
 * linear_search - Function for linear search
 * Algorithm
 * @array: pointer to an array
 * @size: length of array
 * @value: vaue to search for in array
 * Return: First index if value is found
 */
int linear_search(int *array, size_t size, int value)
{
size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; ++i)
		{
		printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		if (value == array[i])
			return (i);
		}
	return (-1);
}
