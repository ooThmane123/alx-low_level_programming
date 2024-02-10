#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of
 * integers using the Linear search algorithms
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: value if exists in array otherwise -1.
 */

int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL || size <= 0)
		return (-1);

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
