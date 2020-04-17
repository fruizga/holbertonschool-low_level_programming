#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of integers
 * @array: pointer to array
 * @size: length of array
 * @value: value to search for in the array
 * Return: index
 */
int binary_search(int *array, size_t size, int value)
{
	unsigned int begin, mid, end, i;

	begin = 0;
	end = size - 1;

	if (array == NULL)
		return (-1);

	while (begin <= end)
	{
		printf("Searching in array: ");
		for (i = begin; i <= end; i++)
		{
			printf("%d", array[i]);
			if (i < end)
				printf(", ");
		}
		printf("\n");

		mid = (begin + end) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			begin = mid + 1;
		else
			end = mid - 1;
	}
	return (-1);
}