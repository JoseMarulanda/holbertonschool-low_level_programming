#include "search_algos.h"
/**
 * linear_search - Linear search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search
 * Return: index if found or -1 not found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%i] \n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
